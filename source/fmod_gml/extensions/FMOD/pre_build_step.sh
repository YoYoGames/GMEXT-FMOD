#!/bin/bash

sed -i -e 's/\r$//' "$(dirname "$0")/scriptUtils.sh"
chmod +x "$(dirname "$0")/scriptUtils.sh"
source "$(dirname "$0")/scriptUtils.sh"

EXTENSION_DIR="$(cd "$(dirname "$0")" && pwd -P)"

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
    pathResolveExisting "$YYprojectDir" "$IOS_SDK_PATH" SDK_PATH

    # Initialize source file variables
    SDK_CORE_SOURCE_FILE=""
    SDK_STUDIO_SOURCE_FILE=""

    # Check device vs simulator build
    if [[ "$YYTARGET_type" == "platformdevice_type_device" ]]; then
        # Device-specific source files
        SDK_CORE_SOURCE_FILE="libfmodL_iphoneos.a"
        SDK_STUDIO_SOURCE_FILE="libfmodstudioL_iphoneos.a"

        # Delete simulator static dependencies if they exist
        itemDelete "$EXTENSION_DIR/iOSSource/libfmodL_iphonesimulator.a"
        itemDelete "$EXTENSION_DIR/iOSSource/libfmodstudioL_iphonesimulator.a"
    else
        # Simulator-specific source files
        SDK_CORE_SOURCE_FILE="libfmodL_iphonesimulator.a"
        SDK_STUDIO_SOURCE_FILE="libfmodstudioL_iphonesimulator.a"

        # Delete device static dependencies if they exist
        itemDelete "$EXTENSION_DIR/iOSSource/libfmodL_iphoneos.a"
        itemDelete "$EXTENSION_DIR/iOSSource/libfmodstudioL_iphoneos.a"
    fi

    # Define full source paths
    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/$SDK_CORE_SOURCE_FILE"
    SDK_STUDIO_SOURCE="$SDK_PATH/api/studio/lib/$SDK_STUDIO_SOURCE_FILE"

    # Asset hash match
    # assertFileHashEquals $SDK_CORE_SOURCE $IOS_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying iOS (arm64) dependencies"

    # Always copy to avoid version mismatch
    pushd "$EXTENSION_DIR/iOSSource" >/dev/null
    itemCopyTo "$SDK_CORE_SOURCE" $SDK_CORE_SOURCE_FILE
    itemCopyTo "$SDK_PATH/api/core/inc" "Fmod Core/"
    itemCopyTo "$SDK_STUDIO_SOURCE" $SDK_STUDIO_SOURCE_FILE
    itemCopyTo "$SDK_PATH/api/studio/inc" "Fmod Studio/"
    popd >/dev/null

}

# ----------------------------------------------------------------------------------------------------
setuptvOS() {
    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$IOS_SDK_PATH" SDK_PATH

    # Initialize source file variables
    SDK_CORE_SOURCE_FILE=""
    SDK_STUDIO_SOURCE_FILE=""

    # Check device vs simulator build
    if [[ "$YYTARGET_type" == "platformdevice_type_device" ]]; then
        # Device-specific source files
        SDK_CORE_SOURCE_FILE="libfmodL_appletvos.a"
        SDK_STUDIO_SOURCE_FILE="libfmodstudioL_appletvos.a"

        # Delete simulator static dependencies if they exist
        itemDelete "$EXTENSION_DIR/tvOSSource/libfmodL_appletvsimulator.a"
        itemDelete "$EXTENSION_DIR/tvOSSource/libfmodstudioL_appletvsimulator.a"
    else
        # Simulator-specific source files
        SDK_CORE_SOURCE_FILE="libfmodL_appletvsimulator.a"
        SDK_STUDIO_SOURCE_FILE="libfmodstudioL_appletvsimulator.a"

        # Delete device static dependencies if they exist
        itemDelete "$EXTENSION_DIR/tvOSSource/libfmodL_appletvos.a"
        itemDelete "$EXTENSION_DIR/tvOSSource/libfmodstudioL_appletvos.a"
    fi

    # Define full source paths
    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/$SDK_CORE_SOURCE_FILE"
    SDK_STUDIO_SOURCE="$SDK_PATH/api/studio/lib/$SDK_STUDIO_SOURCE_FILE"

    # Asset hash match
    # assertFileHashEquals $SDK_CORE_SOURCE $IOS_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying tvOS (arm64) dependencies"

    # Always copy to avoid version mismatch
    pushd "$EXTENSION_DIR/tvOSSource" >/dev/null
    itemCopyTo "$SDK_CORE_SOURCE" $SDK_CORE_SOURCE_FILE
    itemCopyTo "$SDK_PATH/api/core/inc" "Fmod Core/"
    itemCopyTo "$SDK_STUDIO_SOURCE" $SDK_STUDIO_SOURCE_FILE
    itemCopyTo "$SDK_PATH/api/studio/inc" "Fmod Studio/"
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
