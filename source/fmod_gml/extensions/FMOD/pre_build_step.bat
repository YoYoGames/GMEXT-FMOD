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
call %Utils% optionGetValue "iosSdkHash" IOS_SDK_HASH

:: SDK Paths
call %Utils% optionGetValue "iosSdkPath" IOS_SDK_PATH
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
    :: Nothing to do here
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupiOS
    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%IOS_SDK_PATH%" SDK_PATH

    set "SDK_CORE_SOURCE_FILE="
    set "SDK_STUDIO_SOURCE_FILE="

    :: Check device vs simulator build
    if "%YYTARGET_type%"=="platformdevice_type_device" (
        :: Device
        set "SDK_CORE_SOURCE_FILE=libfmodL_iphoneos.a"
        set "SDK_STUDIO_SOURCE_FILE=libfmodstudioL_iphoneos.a"

        :: Delete the simulator static dependencies (if they exist)
        call %Utils% itemDelete "%EXTENSION_DIR%\iOSSource\libfmodL_iphonesimulator.a"
        call %Utils% itemDelete "%EXTENSION_DIR%\iOSSource\libfmodstudioL_iphonesimulator.a"
    ) else (
        :: Simulator
        set "SDK_CORE_SOURCE_FILE=libfmodL_iphonesimulator.a"
        set "SDK_STUDIO_SOURCE_FILE=libfmodstudioL_iphonesimulator.a"

        :: Delete the device static dependecies (if they exist)
        call %Utils% itemDelete "%EXTENSION_DIR%\iOSSource\libfmodL_iphoneos.a"
        call %Utils% itemDelete "%EXTENSION_DIR%\iOSSource\libfmodstudioL_iphoneos.a"
    )

    set SDK_CORE_SOURCE="%SDK_PATH%\api\core\lib\%SDK_CORE_SOURCE_FILE%"
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\%SDK_STUDIO_SOURCE_FILE%"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_CORE_SOURCE% %IOS_SDK_HASH% "%ERROR_SDK_HASH%"

    echo "Copying iOS (arm64) dependencies"

    :: Always copy to avoid version mismatch
    pushd "%EXTENSION_DIR%\iOSSource"
    call %Utils% itemCopyTo %SDK_CORE_SOURCE% "%SDK_CORE_SOURCE_FILE%"
    call %Utils% itemCopyTo "%SDK_PATH%\api\core\inc" "Fmod Core\"
    call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "%SDK_STUDIO_SOURCE_FILE%"
    call %Utils% itemCopyTo "%SDK_PATH%\api\studio\inc" "Fmod Studio\"
    popd

exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setuptvOS
    :: Resolve the SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%IOS_SDK_PATH%" SDK_PATH

    set "SDK_CORE_SOURCE_FILE="
    set "SDK_STUDIO_SOURCE_FILE="

    :: Check device vs simulator build
    if "%YYTARGET_type%"=="platformdevice_type_device" (
        :: Device
        set "SDK_CORE_SOURCE_FILE=libfmodL_appletvos.a"
        set "SDK_STUDIO_SOURCE_FILE=libfmodstudioL_appletvos.a"

        :: Delete the simulator static dependencies (if they exist)
        call %Utils% itemDelete "%EXTENSION_DIR%\tvOSSource\libfmodL_appletvsimulator.a"
        call %Utils% itemDelete "%EXTENSION_DIR%\tvOSSource\libfmodstudioL_appletvsimulator.a"
    ) else (
        :: Simulator
        set "SDK_CORE_SOURCE_FILE=libfmodL_appletvsimulator.a"
        set "SDK_STUDIO_SOURCE_FILE=libfmodstudioL_appletvsimulator.a"

        :: Delete the device static dependecies (if they exist)
        call %Utils% itemDelete "%EXTENSION_DIR%\tvOSSource\libfmodL_appletvos.a"
        call %Utils% itemDelete "%EXTENSION_DIR%\tvOSSource\libfmodstudioL_appletvos.a"
    )

    set SDK_CORE_SOURCE="%SDK_PATH%\api\core\lib\%SDK_CORE_SOURCE_FILE%"
    set SDK_STUDIO_SOURCE="%SDK_PATH%\api\studio\lib\%SDK_STUDIO_SOURCE_FILE%"

    :: Asset hash match
    :: call %Utils% assertFileHashEquals %SDK_CORE_SOURCE% %IOS_SDK_HASH% "%ERROR_SDK_HASH%"

    echo "Copying tvOS (arm64) dependencies"

    :: Always copy to avoid version mismatch
    pushd "%EXTENSION_DIR%\tvOSSource"
    call %Utils% itemCopyTo %SDK_CORE_SOURCE% "%SDK_CORE_SOURCE_FILE%"
    call %Utils% itemCopyTo "%SDK_PATH%\api\core\inc" "Fmod Core\"
    call %Utils% itemCopyTo %SDK_STUDIO_SOURCE% "%SDK_STUDIO_SOURCE_FILE%"
    call %Utils% itemCopyTo "%SDK_PATH%\api\studio\inc" "Fmod Studio\"
    popd
    
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupXbox
    :: Set building defaults
    set "CONFIGURATION=Release-AutoBuild"
    set "PLATFORM="
    set "LIBRARY_NAME="
    set "FMOD_SDK_PATH=%GDK_SDK_PATH%"
    
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
        set "PLATFORM=Gaming.Xbox.XboxOne.x64"
        set "LIBRARY_NAME=YYFMOD_xboxone.dll"
    ) else (
        set "PLATFORM=Gaming.Xbox.Scarlett.x64"
        set "LIBRARY_NAME=YYFMOD_xboxseriesxs.dll"
    )

    :: Resolve the Fmod SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%FMOD_SDK_PATH%" FMOD_SDK_PATH

    :: Resolve the Solution path (must exist)
    set "GDK_VS_PATH=.\fmod_gdk\FMOD.sln"
    call %Utils% pathResolveExisting "%EXTENSION_DIR%" "%GDK_VS_PATH%" SOLUTION_PATH

    :: Build libraries
    call "c:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\Tools\VsDevCmd.bat"
    msbuild "%SOLUTION_PATH%" /p:Configuration="%CONFIGURATION%" /p:Platform="%PLATFORM%" /p:FmodSdkPath="%FMOD_SDK_PATH%"

    :: Extract the directory part from the full path
    call %Utils% pathExtractDirectory "%SOLUTION_PATH%" SOLUTION_DIR

    :: Copy libs to GML project
    call %Utils% itemCopyTo "%SOLUTION_DIR%%PLATFORM%\%CONFIGURATION%\%LIBRARY_NAME%" "%EXTENSION_DIR%\%LIBRARY_NAME%"
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupPlaystation
    :: Set building defaults
    set "CONFIGURATION=Release-AutoBuild"
    set "PLATFORM="
    set "LIBRARY_NAME="
    set "FMOD_SDK_PATH="

    :: Check correct version PS4 or PS5
    if "%YYPLATFORM_name%"=="PlayStation 4" (
        set "PLATFORM=ORBIS"
        set "LIBRARY_NAME=YYFMOD_ps4.prx"
        set "FMOD_SDK_PATH=%PS4_SDK_PATH%"
    ) else (
        set "PLATFORM=Prospero"
        set "LIBRARY_NAME=YYFMOD_ps5.prx"
        set "FMOD_SDK_PATH=%PS5_SDK_PATH%"
    )

    :: Resolve the Fmod SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%FMOD_SDK_PATH%" FMOD_SDK_PATH

    :: Resolve the Solution path (must exist)
    set "PS_VS_PATH=.\fmod_playstation\FMOD.sln"
    call %Utils% pathResolveExisting "%EXTENSION_DIR%" "%PS_VS_PATH%" SOLUTION_PATH

    :: Build libraries
    call "c:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\Tools\VsDevCmd.bat"
    msbuild "%SOLUTION_PATH%" /p:Configuration="%CONFIGURATION%" /p:Platform="%PLATFORM%" /p:FmodSdkPath="%FMOD_SDK_PATH%"

    :: Extract the directory part from the full path
    call %Utils% pathExtractDirectory "%SOLUTION_PATH%" SOLUTION_DIR

    :: Copy libs to GML project
    call %Utils% itemCopyTo "%SOLUTION_DIR%%PLATFORM%\%CONFIGURATION%\%LIBRARY_NAME%" "%EXTENSION_DIR%\%LIBRARY_NAME%"
exit /b 0

:: ----------------------------------------------------------------------------------------------------
:setupSwitch
    :: Set building defaults
    set "CONFIGURATION=Release-AutoBuild"
    set "PLATFORM=NX64"
    set "FMOD_SDK_PATH=%SWITCH_SDK_PATH%"

    :: Resolve the Fmod SDK path (must exist)
    call %Utils% pathResolveExisting "%YYprojectDir%" "%FMOD_SDK_PATH%" FMOD_SDK_PATH

    :: Resolve the Solution path (must exist)
    set "SWITCH_VS_PATH=.\fmod_switch\FMOD.sln"
    call %Utils% pathResolveExisting "%EXTENSION_DIR%" "%SWITCH_VS_PATH%" SOLUTION_PATH

    :: Build libraries
    call "c:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\Tools\VsDevCmd.bat"
    msbuild "%SOLUTION_PATH%" /p:Configuration="%CONFIGURATION%" /p:Platform="%PLATFORM%" /p:FmodSdkPath="%FMOD_SDK_PATH%"

    :: Extract the directory part from the full path
    call %Utils% pathExtractDirectory "%SOLUTION_PATH%" SOLUTION_DIR

    :: Copy libs to GML project
    call %Utils% itemCopyTo "%SOLUTION_DIR%%PLATFORM%\%CONFIGURATION%\YYFMOD.nro" "%EXTENSION_DIR%\YYFMOD.nro"
    call %Utils% itemCopyTo "%SOLUTION_DIR%%PLATFORM%\%CONFIGURATION%\YYFMOD.nrr" "%EXTENSION_DIR%\YYFMOD.nrr"

exit /b 0