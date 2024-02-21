#!/bin/bash

sed -i -e 's/\r$//' "$(dirname "$0")/scriptUtils.sh"
chmod +x "$(dirname "$0")/scriptUtils.sh"
source "$(dirname "$0")/scriptUtils.sh"

# ######################################################################################
# Script Functions

# ----------------------------------------------------------------------------------------------------
setupmacOS() {
    # Nothing to do here
    :
}

# ----------------------------------------------------------------------------------------------------
setupLinux() {
    # Nothing to do here
    :
}

# ----------------------------------------------------------------------------------------------------
setupAndroid() {    
    # Nothing to do here
    :
}

# ----------------------------------------------------------------------------------------------------
setupiOS() {
    # Resolve the SDK path (must exist)
    pathResolveExisting "%YYprojectDir%" "%IOS_SDK_PATH%" SDK_PATH

    # Get library file paths
    SDK_CORE_SOURCE="%SDK_PATH%/api/core/lib/libfmod_iphoneos.a"
    SDK_STUDIO_SOURCE="%SDK_PATH%/api/studio/lib/libfmodstudio_iphoneos.a"

    # Asset hash match
    # assertFileHashEquals $SDK_CORE_SOURCE $IOS_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying iOS (arm64) dependencies"

    pushd "$ExtensionPath/iOSSource" >/dev/null
    if [[ ! -f "fmod_iphoneos.a" ]]; then 
        itemCopyTo $SDK_CORE_SOURCE "fmod_iphoneos.a"
        itemCopyTo "$SDK_PATH/api/core/inc" "Fmod Core/"
    fi

    # Copy studio libs if enabled
    if [[$ENABLE_STUDIO_FLAG == 1]]; then
        if [[ ! -f "fmodstudio_iphoneos.a" ]]; then 
            itemCopyTo $SDK_STUDIO_SOURCE "fmodstudio_iphoneos.a"
            itemCopyTo "$SDK_PATH/api/studio/inc" "Fmod Studio/"
        fi
    fi
    popd >/dev/null
}

# ----------------------------------------------------------------------------------------------------
setupXbox() {
    # Nothing to do here
    :
}

# ----------------------------------------------------------------------------------------------------
setupPlaystation() {
    # Nothing to do here
    :
}

# ----------------------------------------------------------------------------------------------------
setupSwitch() {
    # Nothing to do here
    :
}

# ######################################################################################
# Script Logic

# Always init the script
scriptInit

# Version locks
optionGetValue "versionStable" RUNTIME_VERSION_STABLE
optionGetValue "versionBeta" RUNTIME_VERSION_BETA
optionGetValue "versionDev" RUNTIME_VERSION_DEV
optionGetValue "versionLTS" RUNTIME_VERSION_LTS

# SDK Version
optionGetValue "sdkVersion" SDK_VERSION

# SDK Hash
optionGetValue "iosSdkHash" IOS_SDK_HASH

# SDK Paths
optionGetValue "iosSdkPath" IOS_SDK_PATH

# Enable Studio?
optionGetValue "enableStudio" ENABLE_STUDIO
ENABLE_STUDIO_FLAG=0
if [[ "$ENABLE_STUDIO" == "True" ]]; then 
    ENABLE_STUDIO_FLAG=1
fi

# Error String
ERROR_SDK_HASH="Invalid Steam SDK version, sha256 hash mismatch (expected v$SDK_VERSION)."

# Checks IDE and Runtime versions
versionLockCheck "$YYruntimeVersion" $RUNTIME_VERSION_STABLE $RUNTIME_VERSION_BETA $RUNTIME_VERSION_DEV $RUNTIME_VERSION_LTS

# Resolve the SDK path (must exist)
pathResolveExisting "$YYprojectDir" "$SDK_PATH" SDK_PATH

# Ensure we are on the output path
pushd "$YYoutputFolder" >/dev/null

# Call setup method depending on the platform
# NOTE: the setup method can be (:setupmacOS or :setupLinux)
setup$YYPLATFORM_name

# If debug is set to 'Enabled' provide a warning to the user.
if [ "$DEBUG_MODE" = "Enabled" ]; then
    logWarning "Debug mode is set to 'Enabled', make sure to set it to 'Auto' before publishing."
fi

popd >/dev/null

exit 0
