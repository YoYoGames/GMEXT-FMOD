@echo off
set Utils="%~dp0scriptUtils.bat"
set "EXTENSION_DIR=%~dp0"

:: ######################################################################################
:: Script Logic
::
:: GMFMODStudio ships the FMOD Studio runtime only. The FMOD Core runtime is
:: GMFMOD's responsibility - that extension is always present when this one is
:: used - and console targets are GMFMOD's too. The desktop runtimes are copied
:: into the output folder by post_build_step; Android is staged here, because it
:: goes into this extension's own AndroidSource\libs and the asset compiler reads
:: that before post_build_step runs.

:: Always init the script
call %Utils% scriptInit

:: Version locks
call %Utils% optionGetValue "versionStable" RUNTIME_VERSION_STABLE
call %Utils% optionGetValue "versionBeta" RUNTIME_VERSION_BETA
call %Utils% optionGetValue "versionDev" RUNTIME_VERSION_DEV
call %Utils% optionGetValue "versionLTS" RUNTIME_VERSION_LTS

call %Utils% optionGetValue "gmrtReady" GMRT_READY

:: SDK Version
call %Utils% optionGetValue "sdkVersion" SDK_VERSION

:: SDK Hash
call %Utils% optionGetValue "androidSdkHash" ANDROID_SDK_HASH

:: SDK Paths
call %Utils% optionGetValue "androidSdkPath" ANDROID_SDK_PATH

:: Error String
set "ERROR_SDK_HASH=Invalid FMOD SDK version, sha256 hash mismatch (expected v%SDK_VERSION%)."

:: Checks IDE and Runtime versions
if "%YYTARGET_runtime%" == "GMRT" (
    if "%GMRT_READY%" neq "True" (
        call %Utils% logError "Extension is not compatible with GMRT runtime. Check for updated version."
    )
) else (
    call %Utils% versionLockCheck "%YYruntimeVersion%" %RUNTIME_VERSION_STABLE% %RUNTIME_VERSION_BETA% %RUNTIME_VERSION_DEV% %RUNTIME_VERSION_LTS%
)

:: Ensure we are on the output path
pushd "%YYoutputFolder%"

:: Call setup method depending on the platform
:: NOTE: the setup method can be (:setupWindows, :setupMacOS, :setupLinux, :setupAndroid, :setupiOS)
call :setup%YYPLATFORM_name%

popd

exit %ERRORLEVEL%

:: ----------------------------------------------------------------------------------------------------
:setupWindows
    :: Nothing to do here
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupMacOS
    :: Nothing to do here
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupLinux
    :: Nothing to do here
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupAndroid
    :: Staged here and not in post_build_step: the destination is the extension's own
    :: AndroidSource\libs, which the asset compiler reads before post_build_step runs.

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%ANDROID_SDK_PATH%" SDK_PATH

    :: Asset hash match
    :: call %Utils% assertFileHashEquals "%SDK_PATH%\api\studio\lib\arm64-v8a\libfmodstudio.so" %ANDROID_SDK_HASH% "%ERROR_SDK_HASH%"

    pushd "%EXTENSION_DIR%\AndroidSource\libs"

    :: No fmod.jar and no libfmod.so here - GMFMOD stages both, and a second copy
    :: at the same path in the same APK is a duplicate-class build failure.

    :: Handle arm64-v8a architecture
    if "%YYPLATFORM_option_android_arch_arm64%"=="True" (
        echo "Copying Android (arm64-v8a) dependencies"
        if not exist "arm64-v8a" mkdir "arm64-v8a"
        call %Utils% itemCopyTo "%SDK_PATH%\api\studio\lib\arm64-v8a\libfmodstudio.so" "arm64-v8a\libfmodstudio.so"
    ) else (
        if exist "arm64-v8a" (
            call %Utils% itemDelete "arm64-v8a\libfmodstudio.so"
        )
    )

    :: Handle armeabi-v7a architecture
    if "%YYPLATFORM_option_android_arch_armv7%"=="True" (
        echo "Copying Android (armeabi-v7a) dependencies"
        if not exist "armeabi-v7a" mkdir "armeabi-v7a"
        call %Utils% itemCopyTo "%SDK_PATH%\api\studio\lib\armeabi-v7a\libfmodstudio.so" "armeabi-v7a\libfmodstudio.so"
    ) else (
        if exist "armeabi-v7a" (
            call %Utils% itemDelete "armeabi-v7a\libfmodstudio.so"
        )
    )

    :: Handle x86_64 architecture
    if "%YYPLATFORM_option_android_arch_x86_64%"=="True" (
        echo "Copying Android (x86_64) dependencies"
        if not exist "x86_64" mkdir "x86_64"
        call %Utils% itemCopyTo "%SDK_PATH%\api\studio\lib\x86_64\libfmodstudio.so" "x86_64\libfmodstudio.so"
    ) else (
        if exist "x86_64" (
            call %Utils% itemDelete "x86_64\libfmodstudio.so"
        )
    )

    popd
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupiOS
    :: Nothing to do here. Under "ios": {"mode": "native"} the FMOD Studio iOS static
    :: libraries are linked straight from the vendored SDK by source/third_party/CMakeLists.txt,
    :: so there is no iOSSource folder to stage into.
exit /b 0
