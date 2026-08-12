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

setupMac() {
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

    # Check device vs simulator build
    if [[ "$YYTARGET_type" == "platformdevice_type_device" ]]; then
        # Device-specific source files
        SDK_CORE_SOURCE_FILE="libfmodL_iphoneos.a"

        # Delete simulator static dependencies if they exist
        itemDelete "$EXTENSION_DIR/iOSSource/libfmodL_iphonesimulator.a"
    else
        # Simulator-specific source files
        SDK_CORE_SOURCE_FILE="libfmodL_iphonesimulator.a"

        # Delete device static dependencies if they exist
        itemDelete "$EXTENSION_DIR/iOSSource/libfmodL_iphoneos.a"
    fi

    # Define full source path (core only - GMFMODStudio stages the Studio lib)
    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/$SDK_CORE_SOURCE_FILE"

    # Asset hash match
    # assertFileHashEquals $SDK_CORE_SOURCE $IOS_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying iOS (arm64) dependencies"

    # Always copy to avoid version mismatch
    pushd "$EXTENSION_DIR/iOSSource" >/dev/null
    itemCopyTo "$SDK_CORE_SOURCE" $SDK_CORE_SOURCE_FILE
    itemCopyTo "$SDK_PATH/api/core/inc" "Fmod Core/"
    popd >/dev/null

}

# ----------------------------------------------------------------------------------------------------
setuptvOS() {
    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$IOS_SDK_PATH" SDK_PATH

    # Initialize source file variables
    SDK_CORE_SOURCE_FILE=""

    # Check device vs simulator build
    if [[ "$YYTARGET_type" == "platformdevice_type_device" ]]; then
        # Device-specific source files
        SDK_CORE_SOURCE_FILE="libfmodL_appletvos.a"

        # Delete simulator static dependencies if they exist
        itemDelete "$EXTENSION_DIR/tvOSSource/libfmodL_appletvsimulator.a"
    else
        # Simulator-specific source files
        SDK_CORE_SOURCE_FILE="libfmodL_appletvsimulator.a"

        # Delete device static dependencies if they exist
        itemDelete "$EXTENSION_DIR/tvOSSource/libfmodL_appletvos.a"
    fi

    # Define full source path (core only - GMFMODStudio stages the Studio lib)
    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/$SDK_CORE_SOURCE_FILE"

    # Asset hash match
    # assertFileHashEquals $SDK_CORE_SOURCE $IOS_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying tvOS (arm64) dependencies"

    # Always copy to avoid version mismatch
    pushd "$EXTENSION_DIR/tvOSSource" >/dev/null
    itemCopyTo "$SDK_CORE_SOURCE" $SDK_CORE_SOURCE_FILE
    itemCopyTo "$SDK_PATH/api/core/inc" "Fmod Core/"
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


# ----------------------------------------------------------------------------------------------------
setupSwitch2() {
    if [[ -z "${SWITCH2_SDK_PATH:-}" ]]; then
        logError "Extension option 'switch2SdkPath' is empty. Set it to the FMOD Switch 2 SDK path."
    fi

    pathResolveExisting "$YYprojectDir" "$SWITCH2_SDK_PATH" SDK_PATH

    # Optional hash check. Matches Switch 1 behavior: currently bypassed/commented.
    # assertFileHashEquals "$SDK_PATH/api/core/lib/libfmodL.a" "$SWITCH2_SDK_HASH" "$ERROR_SDK_HASH"

    # Nothing else to do here on shell build path unless YoYo adds a non-Windows Switch2 pipeline.
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

optionGetValue "gmrtReady" GMRT_READY

# SDK Version
optionGetValue "sdkVersion" SDK_VERSION

# SDK Hash
optionGetValue "iosSdkHash" IOS_SDK_HASH

# SDK Paths
optionGetValue "iosSdkPath" IOS_SDK_PATH

# Error String
ERROR_SDK_HASH="Invalid FMOD SDK version, sha256 hash mismatch (expected v$SDK_VERSION)."

# Verify if extension is GMRT ready
if [[ ${YYTARGET_runtime:-} == "GMRT" ]]; then
    if [[ ${GMRT_READY:-} != "True" ]]; then
        logError "Extension is not compatible with GMRT runtime. Check for updated version."
    fi
else
    # Checks IDE and Runtime versions
    versionLockCheck "$YYruntimeVersion" $RUNTIME_VERSION_STABLE $RUNTIME_VERSION_BETA $RUNTIME_VERSION_DEV $RUNTIME_VERSION_LTS
fi

# Ensure we are on the output path
pushd "$YYoutputFolder" >/dev/null

# Call setup method depending on the platform
setup$YYPLATFORM_name

popd >/dev/null

exit 0
