@echo off
set Utils="%~dp0scriptUtils.bat"
set ExtensionPath="%~dp0"

:: ######################################################################################
:: Script Logic
::
:: GMFMODStudio targets desktop only (Windows / macOS / Linux) and ships the FMOD Studio
:: runtime only. The FMOD Core runtime is GMFMOD's responsibility - that extension is
:: always present when this one is used.

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

:: SDK Paths
call %Utils% optionGetValue "winSdkPath" WIN_SDK_PATH
call %Utils% optionGetValue "macosSdkPath" MACOS_SDK_PATH
call %Utils% optionGetValue "linuxSdkPath" LINUX_SDK_PATH

:: Error String
set "ERROR_SDK_HASH=Invalid FMOD SDK version, sha256 hash mismatch (expected v%SDK_VERSION%)."

:: Ensure we are on the output path
if "%YYTARGET_runtime%" == "GMRT" (
    pushd "%YYoutputFolder%\build\assets"
) else (
    pushd "%YYoutputFolder%"
)

:: Call setup method depending on the platform
:: NOTE: the setup method can be (:setupWindows, :setupMacOS, :setupLinux)
call :setup%YYPLATFORM_name%

popd

exit %ERRORLEVEL%

:: ----------------------------------------------------------------------------------------------------
:setupWindows
    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%WIN_SDK_PATH%" SDK_PATH

    :: Get library file path (studio only - GMFMOD is responsible for fmodL.dll)
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\x64\fmodstudioL.dll"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_STUDIO_SOURCE% %WIN_SDK_HASH% "%ERROR_SDK_HASH%"

    echo "Copying Windows (64 bit) dependencies"
    if not exist "fmodstudioL.dll" call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "fmodstudioL.dll"
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupMacOS

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%MACOS_SDK_PATH%" SDK_PATH

    :: Get library file path (studio only)
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\libfmodstudioL.dylib"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_STUDIO_SOURCE% %MACOS_SDK_HASH% "%ERROR_SDK_HASH%"

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
        call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "!YYfixedProjectName!\!YYfixedProjectName!\Supporting Files\libfmodstudioL.dylib"

        endlocal
    )
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupLinux

    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%LINUX_SDK_PATH%" SDK_PATH

    :: Get library file path (studio only)
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\x86_64\libfmodstudio.so.14"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_STUDIO_SOURCE% %LINUX_SDK_HASH% "%ERROR_SDK_HASH%"

    echo "Copying Linux (64 bit) dependencies"

    setlocal enabledelayedexpansion

    :: When running from CLI 'YYprojectName' will not be set, use 'YYprojectPath' instead.
    if "%YYprojectName%"=="" (
        for %%A in ("%YYprojectPath%") do set "YYprojectName=%%~nA"
    )

    :: Update the zip file with the required SDKs
    mkdir _temp\assets
    call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "_temp\assets\libfmodstudio.so.14"
    call %Utils% zipUpdate "_temp" "!YYprojectName!.zip"
    rmdir /s /q _temp

    endlocal

exit /b 0
