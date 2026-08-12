@echo off
set Utils="%~dp0scriptUtils.bat"
set "EXTENSION_DIR=%~dp0"

:: ######################################################################################
:: Script Logic
::
:: GMFMODStudio targets desktop only (Windows / macOS / Linux). Mobile and console are
:: handled by GMFMOD, which is always present when this extension is used. Nothing has
:: to be staged before the build - the FMOD Studio runtime is copied in post_build_step.

:: Always init the script
call %Utils% scriptInit

:: Version locks
call %Utils% optionGetValue "versionStable" RUNTIME_VERSION_STABLE
call %Utils% optionGetValue "versionBeta" RUNTIME_VERSION_BETA
call %Utils% optionGetValue "versionDev" RUNTIME_VERSION_DEV
call %Utils% optionGetValue "versionLTS" RUNTIME_VERSION_LTS

call %Utils% optionGetValue "gmrtReady" GMRT_READY

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
:: NOTE: the setup method can be (:setupWindows, :setupMacOS, :setupLinux)
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
