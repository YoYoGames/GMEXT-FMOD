@echo off
set Utils="%~dp0scriptUtils.bat"
set ExtensionPath="%~dp0"

:: ######################################################################################
:: Script Logic

:: Always init the script
call %Utils% scriptInit

:: Version locks
call %Utils% optionGetValue "versionStable" RUNTIME_VERSION_STABLE
call %Utils% optionGetValue "versionBeta" RUNTIME_VERSION_BETA
call %Utils% optionGetValue "versionDev" RUNTIME_VERSION_DEV
call %Utils% optionGetValue "versionLTS" RUNTIME_VERSION_LTS

:: SDK Version
call %Utils% optionGetValue "sdkVersion" SDK_VERSION

:: SDK Hash
call %Utils% optionGetValue "winSdkHash" WIN_SDK_HASH
call %Utils% optionGetValue "macosSdkHash" MACOS_SDK_HASH
call %Utils% optionGetValue "linuxSdkHash" LINUX_SDK_HASH
call %Utils% optionGetValue "iosSdkHash" IOS_SDK_HASH
call %Utils% optionGetValue "androidSdkHash" ANDROID_SDK_HASH
call %Utils% optionGetValue "xboxOneSdkHash" XBOX_ONE_SDK_HASH
call %Utils% optionGetValue "xboxSeriesSdkHash" XBOX_SERIES_SDK_HASH
call %Utils% optionGetValue "ps4SdkHash" PS4_SDK_HASH
call %Utils% optionGetValue "ps5SdkHash" PS5_SDK_HASH
call %Utils% optionGetValue "switchSdkHash" SWITCH_SDK_HASH

:: SDK Paths
call %Utils% optionGetValue "winSdkPath" WIN_SDK_PATH
call %Utils% optionGetValue "macosSdkPath" MACOS_SDK_PATH
call %Utils% optionGetValue "linuxSdkPath" LINUX_SDK_PATH
call %Utils% optionGetValue "iosSdkPath" IOS_SDK_PATH
call %Utils% optionGetValue "androidSdkPath" ANDROID_SDK_PATH
call %Utils% optionGetValue "gdkSdkPath" GDK_SDK_PATH
call %Utils% optionGetValue "ps4SdkPath" PS4_SDK_PATH
call %Utils% optionGetValue "ps5SdkPath" PS5_SDK_PATH
call %Utils% optionGetValue "switchSdkPath" SWITCH_SDK_PATH

:: Enable Studio? 
call %Utils% optionGetValue "enableStudio" ENABLE_STUDIO
set "ENABLE_STUDIO_FLAG=1"
if "%ENABLE_STUDIO%"=="True" set "ENABLE_STUDIO_FLAG=1"

:: Error String
set "ERROR_SDK_HASH=Invalid FMOD SDK version, sha256 hash mismatch (expected v%SDK_VERSION%)."

:: Checks IDE and Runtime versions (NOT NECESSARY SHOULD BE DONE IN 'pre_build_step')
:: call %Utils% versionLockCheck "%YYruntimeVersion%" %RUNTIME_VERSION_STABLE% %RUNTIME_VERSION_BETA% %RUNTIME_VERSION_DEV% %RUNTIME_VERSION_LTS%

:: Ensure we are on the output path
if "%YYTARGET_runtime%" == "GMRT" (
    pushd "%YYoutputFolder%\build\assets"
) else (
    pushd "%YYoutputFolder%"
)

:: Call setup method depending on the platform
:: NOTE: the setup method can be (:setupWindows, :setupMacOS, :setupLinux, :setupAndroid, :setupiOS, :setupXbox, :setupPlaystation, :setupSwitch)
call :setup%YYPLATFORM_name%

popd

exit %ERRORLEVEL%

:: ----------------------------------------------------------------------------------------------------
:setupWindows
    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%WIN_SDK_PATH%" SDK_PATH

    :: Get library file paths
    set SDK_CORE_SOURCE="%SDK_PATH%\api\core\lib\x64\fmodL.dll"
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\x64\fmodstudioL.dll"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_CORE_SOURCE% %WIN_SDK_HASH% "%ERROR_SDK_HASH%"

    echo "Copying Windows (64 bit) dependencies"
    if not exist "fmodL.dll" call %Utils% itemCopyTo %SDK_CORE_SOURCE% "fmodL.dll"

    :: Copy studio libs if enabled
    if %ENABLE_STUDIO_FLAG% == 1 (
        if not exist "fmodstudioL.dll" call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "fmodstudioL.dll"
    )
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupMacOS

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%MACOS_SDK_PATH%" SDK_PATH

    :: Get library file paths
    set SDK_CORE_SOURCE="%SDK_PATH%\api\core\lib\libfmodL.dylib"
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\libfmodstudioL.dylib"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_CORE_SOURCE% %MACOS_SDK_HASH% "%ERROR_SDK_HASH%"
     
    echo "Copying macOS (64 bit) dependencies"
    if "%YYTARGET_runtime%" == "VM" (
        :: This is used for VM compilation
        call %Utils% logError "Extension is not compatible with the macOS VM export, please use YYC."
    ) else (
        setlocal enabledelayedexpansion

        :: When running from CI the 'YYprojectName' will not be set use 'YYprojectPath' instead.
        if "%YYprojectName%"=="" (
            for %%A in ("%YYprojectPath%") do set "YYprojectName=%%~nA"
        )
        :: Replace spaces with underscores (this matches the assetcompiler output)
        set YYfixedProjectName=!YYprojectName: =_!

        :: This is used for YYC compilation
        call %Utils% itemCopyTo %SDK_CORE_SOURCE% "!YYfixedProjectName!\!YYfixedProjectName!\Supporting Files\libfmodL.dylib"

        :: Copy studio libs if enabled
        if %ENABLE_STUDIO_FLAG% == 1 (
            call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "!YYfixedProjectName!\!YYfixedProjectName!\Supporting Files\libfmodstudioL.dylib"
        )
        endlocal
    )
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupLinux

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%LINUX_SDK_PATH%" SDK_PATH

    :: Get library file paths
    set SDK_CORE_SOURCE="%SDK_PATH%\api\core\lib\x86_64\libfmod.so.13"
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\x86_64\libfmodstudio.so.13"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_CORE_SOURCE% %LINUX_SDK_HASH% "%ERROR_SDK_HASH%"
    
    echo "Copying Linux (64 bit) dependencies"

    setlocal enabledelayedexpansion

    :: When running from CLI 'YYprojectName' will not be set, use 'YYprojectPath' instead.
    if "%YYprojectName%"=="" (
        for %%A in ("%YYprojectPath%") do set "YYprojectName=%%~nA"
    )

    :: Update the zip file with the required SDKs
    mkdir _temp\assets
    call %Utils% itemCopyTo %SDK_CORE_SOURCE% "_temp\assets\libfmod.so.13"
    if %ENABLE_STUDIO_FLAG% == 1 (
        if not exist "_temp\assets\libfmodstudio.so.13" call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "_temp\assets\libfmodstudio.so.13"
    )
    call %Utils% zipUpdate "_temp" "!YYprojectName!.zip"
    rmdir /s /q _temp

    setlocal enabledelayedexpansion

exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupAndroid
    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%ANDROID_SDK_PATH%" SDK_PATH

    :: Asset hash match
    :: call %Utils% assertFileHashEquals "%SDK_PATH%\api\core\lib\arm64-v8a\libfmodL.so" %ANDROID_SDK_HASH% "%ERROR_SDK_HASH%"

    pushd "%ExtensionPath%\AndroidSource\libs"

    :: Handle common architecture
    if not exist "fmod.jar" call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\fmod.jar" "fmod.jar"

    :: Handle arm64-v8a architecture
    if "%YYPLATFORM_option_android_arch_arm64%"=="True" (
        echo "Copying Android (arm64-v8a) dependencies"
        if not exist "arm64-v8a" mkdir "arm64-v8a"
        if not exist "arm64-v8a\libfmodL.so" call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\arm64-v8a\libfmodL.so" "arm64-v8a\libfmodL.so"
        if not exist "arm64-v8a\libfmodstudioL.so" call %Utils% itemCopyTo "%SDK_PATH%\api\studio\lib\arm64-v8a\libfmodstudioL.so" "arm64-v8a\libfmodstudioL.so"
    ) else (
        if exist "arm64-v8a" (
            call %Utils% itemDelete "arm64-v8a\libfmodL.so"
            call %Utils% itemDelete "arm64-v8a\libfmodstudioL.so"
        )
    )

    :: Handle armeabi-v7a architecture
    if "%YYPLATFORM_option_android_arch_armv7%"=="True" (
        echo "Copying Android (armeabi-v7a) dependencies"
        if not exist "armeabi-v7a" mkdir "armeabi-v7a"
        if not exist "armeabi-v7a\libfmodL.so" call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\armeabi-v7a\libfmodL.so" "armeabi-v7a\libfmodL.so"
        if not exist "armeabi-v7a\libfmodstudioL.so" call %Utils% itemCopyTo "%SDK_PATH%\api\studio\lib\armeabi-v7a\libfmodstudioL.so" "armeabi-v7a\libfmodstudioL.so"
    ) else (
        if exist "armeabi-v7a" (
            call %Utils% itemDelete "armeabi-v7a\libfmodL.so"
            call %Utils% itemDelete "armeabi-v7a\libfmodstudioL.so"
        )
    )

    :: Handle x86-64 architecture
    if "%YYPLATFORM_option_android_arch_x86_64%"=="True" (
        echo "Copying Android (x86-64) dependencies"
        if not exist "x86-64" mkdir "x86-64"
        if not exist "x86-64\libfmodL.so" call %Utils% itemCopyTo "%SDK_PATH%\api\core\lib\x86-64\libfmodL.so" "x86-64\libfmodL.so"
        if not exist "x86-64\libfmodstudioL.so" call %Utils% itemCopyTo "%SDK_PATH%\api\studio\lib\x86-64\libfmodstudioL.so" "x86-64\libfmodstudioL.so"
    ) else (
        if exist "x86-64" (
            call %Utils% itemDelete "x86-64\libfmodL.so"
            call %Utils% itemDelete "x86-64\libfmodstudioL.so"
        )
    )

    popd
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupiOS
    :: Nothing to do here
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupXbox
    :: Set building defaults
    set "PLATFORM_PATH="

    :: Get Xbox type file
    set "FilePath=%YYoutputFolder%\xbox-type.bin"
    set IsXboxOne=0

    :: Read the file and check if it contains "XboxOne"
    for /f "delims=" %%A in ('type "%FilePath%"') do (
        if /i "%%A"=="XboxOne" (
            set IsXboxOne=1
        )
    )

    :: Update default variables
    if %IsXboxOne% == 1 (
        set "PLATFORM_PATH=xboxone"
        set XBOX_SDK_HASH=%XBOX_ONE_SDK_HASH%
    ) else (
        set "PLATFORM_PATH=scarlett"
        set XBOX_SDK_HASH=%XBOX_SERIES_SDK_HASH%
    )

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%GDK_SDK_PATH%" SDK_PATH

    :: Get library file paths
    set SDK_CORE_SOURCE="%SDK_PATH%\api\core\lib\%PLATFORM_PATH%\fmodL.dll"
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\%PLATFORM_PATH%\fmodstudioL.dll"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_CORE_SOURCE% %XBOX_SDK_HASH% "%ERROR_SDK_HASH%"

    echo "Copying XBox (%PLATFORM_PATH%) dependencies"
    if not exist "fmodL.dll" (
        call %Utils% itemCopyTo %SDK_CORE_SOURCE% "fmodL.dll"
    )

    :: Copy studio libs if enabled
    if %ENABLE_STUDIO_FLAG% == 1 (
        if not exist "fmodstudioL.dll" (
            call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "fmodstudioL.dll"
        )
    )
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupPlaystation
    :: Check correct version PS4 or PS5
    if "%YYPLATFORM_name%"=="PlayStation 4" (
        set PS_SDK_PATH=%PS4_SDK_PATH%
        set PS_SDK_HASH=%PS4_SDK_HASH%
    ) else (
        set PS_SDK_PATH=%PS5_SDK_PATH%
        set PS_SDK_HASH=%PS5_SDK_HASH%
    )

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%PS_SDK_PATH%" SDK_PATH

    :: Get library file paths
    set SDK_CORE_SOURCE="%SDK_PATH%\api\core\lib\libfmodL.prx"
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\libfmodstudioL.prx"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_CORE_SOURCE% %PS_SDK_HASH% "%ERROR_SDK_HASH%"

    echo "Copying %YYPLATFORM_name% dependencies"
    call %Utils% itemCopyTo %SDK_CORE_SOURCE% "libfmodL.prx"

    :: Copy studio libs if enabled
    if %ENABLE_STUDIO_FLAG% == 1 (
        call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "libfmodstudioL.prx"
    )
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupSwitch
    :: Nothing to do here
exit /b 0