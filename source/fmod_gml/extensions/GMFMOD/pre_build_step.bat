@echo off
set Utils="%~dp0scriptUtils.bat"
set "EXTENSION_DIR=%~dp0"

:: ######################################################################################
:: Script Logic

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
call %Utils% optionGetValue "iosSdkHash" IOS_SDK_HASH

:: SDK Paths
call %Utils% optionGetValue "androidSdkPath" ANDROID_SDK_PATH
call %Utils% optionGetValue "iosSdkPath" IOS_SDK_PATH
call %Utils% optionGetValue "gdkSdkPath" GDK_SDK_PATH
call %Utils% optionGetValue "ps4SdkPath" PS4_SDK_PATH
call %Utils% optionGetValue "ps5SdkPath" PS5_SDK_PATH
call %Utils% optionGetValue "switchSdkPath" SWITCH_SDK_PATH

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
:: NOTE: the setup method can be (:setupWindows, :setupMacOS, :setupLinux, :setupAndroid, :setupiOS, :setupXbox, :setupPlaystation, :setupSwitch)
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
    :: call %Utils% assertFileHashEquals "%SDK_PATH%\api\core\lib\arm64-v8a\libfmod.so" %ANDROID_SDK_HASH% "%ERROR_SDK_HASH%"

    pushd "%EXTENSION_DIR%\AndroidSource\libs"

    :: Handle common architecture
    call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\fmod.jar" "fmod.jar"

    :: Handle arm64-v8a architecture
    if "%YYPLATFORM_option_android_arch_arm64%"=="True" (
        echo "Copying Android (arm64-v8a) dependencies"
        if not exist "arm64-v8a" mkdir "arm64-v8a"
        call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\arm64-v8a\libfmod.so" "arm64-v8a\libfmod.so"
    ) else (
        if exist "arm64-v8a" (
            call %Utils% itemDelete "arm64-v8a\libfmod.so"
        )
    )

    :: Handle armeabi-v7a architecture
    if "%YYPLATFORM_option_android_arch_armv7%"=="True" (
        echo "Copying Android (armeabi-v7a) dependencies"
        if not exist "armeabi-v7a" mkdir "armeabi-v7a"
        call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\armeabi-v7a\libfmod.so" "armeabi-v7a\libfmod.so"
    ) else (
        if exist "armeabi-v7a" (
            call %Utils% itemDelete "armeabi-v7a\libfmod.so"
        )
    )

    :: Handle x86_64 architecture
    if "%YYPLATFORM_option_android_arch_x86_64%"=="True" (
        echo "Copying Android (x86_64) dependencies"
        if not exist "x86_64" mkdir "x86_64"
        call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\x86_64\libfmod.so" "x86_64\libfmod.so"
    ) else (
        if exist "x86_64" (
            call %Utils% itemDelete "x86_64\libfmod.so"
        )
    )

    popd
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupiOS
    :: Nothing to do here. Under "ios": {"mode": "native"} the FMOD iOS static libraries are
    :: linked straight from the vendored SDK by source/third_party/CMakeLists.txt, so there is
    :: no iOSSource folder to stage into.
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:: Consoles
::
:: The console binaries are not committed. Each handler below configures and builds this extension's
:: CMake project (source\) with the preset extgen generated for the platform, and the generated
:: cmake\<platform>\extgen_post_build.cmake places the finished binary next to this script under the
:: name GMFMOD.yy expects - so there is no copy step here. The release preset is always built,
:: whatever the game's own configuration is.
::
:: The Xbox presets (xbox-one-release, xbox-scarlett-release) are in source\CMakePresets.json. The
:: PlayStation and Switch ones (ps4-release, ps5-release, switch-release) are per developer, because
:: they carry the toolchain paths of the SDK installed on the build machine: copy
:: source\templates\CMakeUserPresets.json.template to source\CMakeUserPresets.json and fill it in.
::
:: The FMOD runtime is staged next to GMFMOD.yy as well, where the manifest's proxy entries pick it
:: up: fmod.dll on Xbox, libfmod.prx on PlayStation. Switch links FMOD statically - nothing to stage.
:: Core only - GMFMODStudio stages its own fmodstudio.dll / libfmodstudio.prx.
:: ----------------------------------------------------------------------------------------------------

:: ----------------------------------------------------------------------------------------------------
:setupXbox
    :: Xbox One or Xbox Series: xbox-type.bin when the IDE wrote one, else the package kind in the
    :: target file name, else Series.
    set "XBOX_TYPE_FILE=%YYoutputFolder%\xbox-type.bin"
    set "IS_XBOX_ONE="
    if exist "%XBOX_TYPE_FILE%" (
        for /f "usebackq delims=" %%A in ("%XBOX_TYPE_FILE%") do (
            if /i "%%A"=="XboxOne" set "IS_XBOX_ONE=1"
            if /i "%%A"=="Scarlett" set "IS_XBOX_ONE=0"
        )
    )
    if not defined IS_XBOX_ONE if defined YYtargetFile (
        echo(%YYtargetFile%| findstr /i "xboxone-dev-pkg xboxone-pkg" >nul && set "IS_XBOX_ONE=1"
        echo(%YYtargetFile%| findstr /i "xboxseriesxs-dev-pkg xboxseriesxs-pkg" >nul && set "IS_XBOX_ONE=0"
    )
    if not defined IS_XBOX_ONE (
        echo Could not determine the Xbox target, defaulting to Xbox Series.
        set "IS_XBOX_ONE=0"
    )

    if "%IS_XBOX_ONE%"=="1" (
        set "CMAKE_PRESET=xbox-one-release"
        set "PLATFORM_PATH=xboxone"
    ) else (
        set "CMAKE_PRESET=xbox-scarlett-release"
        set "PLATFORM_PATH=scarlett"
    )

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%GDK_SDK_PATH%" SDK_PATH

    call :consoleBuild

    :: Runtime, picked up by the Xbox proxy on the libfmod.dylib manifest entry
    echo Copying Xbox (%PLATFORM_PATH%) dependencies
    call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\%PLATFORM_PATH%\fmod.dll" "%EXTENSION_DIR%\fmod.dll"
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupPlaystation
    :: Reached for both PS4 and PS5: "PlayStation 4" / "PlayStation 5" split on the space when
    :: dispatched, so the two are told apart on the full variable, not on the label argument.
    if "%YYPLATFORM_name%"=="PlayStation 4" (
        set "CMAKE_PRESET=ps4-release"
        set "SDK_PATH_OPTION=%PS4_SDK_PATH%"
    ) else (
        set "CMAKE_PRESET=ps5-release"
        set "SDK_PATH_OPTION=%PS5_SDK_PATH%"
    )

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%SDK_PATH_OPTION%" SDK_PATH

    call :consoleBuild user

    :: Runtime, picked up by the PS4 / PS5 proxies on the libfmod.dylib manifest entry
    echo Copying %YYPLATFORM_name% dependencies
    call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\libfmod.prx" "%EXTENSION_DIR%\libfmod.prx"
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupSwitch
    set "CMAKE_PRESET=switch-release"

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%SWITCH_SDK_PATH%" SDK_PATH

    call :consoleBuild user

    :: FMOD is a static library on Switch and is already inside GMFMOD.nro - nothing to stage.
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:: consoleBuild [user]
::   Configures and builds source\ with the preset in CMAKE_PRESET against the SDK folder in SDK_PATH,
::   which reaches CMake as FMOD_SDK_PLATFORM_DIR - the override source\third_party\CMakeLists.txt
::   reads in its console branches. "user" marks a preset that lives in the per-developer
::   source\CMakeUserPresets.json rather than in the generated source\CMakePresets.json.
:consoleBuild
    if "%~1"=="user" if not exist "%EXTENSION_DIR%\source\CMakeUserPresets.json" (
        call %Utils% logError "Preset '%CMAKE_PRESET%' needs source\CMakeUserPresets.json with this machine's toolchain paths - copy source\templates\CMakeUserPresets.json.template there and fill it in."
    )

    :: A trailing separator would escape the closing quote of the -D argument below
    if "%SDK_PATH:~-1%"=="\" set "SDK_PATH=%SDK_PATH:~0,-1%"

    :: CMake's Visual Studio generator runs msbuild, so it needs the same environment msbuild does
    call "%YYPREF_visual_studio_path%"
    where cmake >nul 2>nul
    if errorlevel 1 call %Utils% logError "cmake is not on PATH after loading the Visual Studio environment."

    pushd "%EXTENSION_DIR%\source"
    cmake --preset %CMAKE_PRESET% "-DFMOD_SDK_PLATFORM_DIR=%SDK_PATH%"
    if errorlevel 1 call %Utils% logError "CMake configure failed for preset '%CMAKE_PRESET%'."
    cmake --build --preset %CMAKE_PRESET% --target GMFMOD
    if errorlevel 1 call %Utils% logError "CMake build failed for preset '%CMAKE_PRESET%'."
    popd
exit /b 0
