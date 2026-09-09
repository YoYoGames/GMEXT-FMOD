#!/bin/bash

sed -i -e 's/\r$//' "$(dirname "$0")/scriptUtils.sh"
chmod +x "$(dirname "$0")/scriptUtils.sh"
source "$(dirname "$0")/scriptUtils.sh"

EXTENSION_DIR="$(cd "$(dirname "$0")" && pwd -P)"

# ######################################################################################
# Script Functions
#
# GMFMODStudio ships the FMOD Studio runtime only. The FMOD Core runtime is
# GMFMOD's responsibility - that extension is always present when this one is
# used - and console targets are GMFMOD's too. The desktop runtimes are copied
# into the output folder by post_build_step; Android is staged here, because it
# goes into this extension's own AndroidSource/libs and the asset compiler reads
# that before post_build_step runs.

# ----------------------------------------------------------------------------------------------------
setupWindows() {
    # Nothing to do here
    :
}

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
    # Staged here and not in post_build_step: the destination is the extension's own
    # AndroidSource/libs, which the asset compiler reads before post_build_step runs.

    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$ANDROID_SDK_PATH" SDK_PATH

    # assertFileHashEquals "$SDK_PATH/api/studio/lib/arm64-v8a/libfmodstudio.so" $ANDROID_SDK_HASH "$ERROR_SDK_HASH"

    pushd "$EXTENSION_DIR/AndroidSource/libs" >/dev/null

    # No fmod.jar and no libfmod.so here - GMFMOD stages both, and a second copy
    # at the same path in the same APK is a duplicate-class build failure.

    # Handle arm64-v8a architecture
    if [[ "$YYPLATFORM_option_android_arch_arm64" == "True" ]]; then
        echo "Copying Android (arm64-v8a) dependencies"
        [[ ! -d "arm64-v8a/" ]] && mkdir "arm64-v8a"
        itemCopyTo "$SDK_PATH/api/studio/lib/arm64-v8a/libfmodstudio.so" "arm64-v8a/libfmodstudio.so"
    else
        if [ -d "arm64-v8a" ]; then
            itemDelete "arm64-v8a/libfmodstudio.so"
        fi
    fi

    # Handle armeabi-v7a architecture
    if [[ "$YYPLATFORM_option_android_arch_armv7" == "True" ]]; then
        echo "Copying Android (armeabi-v7a) dependencies"
        [[ ! -d "armeabi-v7a/" ]] && mkdir "armeabi-v7a"
        itemCopyTo "$SDK_PATH/api/studio/lib/armeabi-v7a/libfmodstudio.so" "armeabi-v7a/libfmodstudio.so"
    else
        if [ -d "armeabi-v7a" ]; then
            itemDelete "armeabi-v7a/libfmodstudio.so"
        fi
    fi

    # Handle x86_64 architecture
    if [[ "$YYPLATFORM_option_android_arch_x86_64" == "True" ]]; then
        echo "Copying Android (x86_64) dependencies"
        [[ ! -d "x86_64" ]] && mkdir "x86_64"
        itemCopyTo "$SDK_PATH/api/studio/lib/x86_64/libfmodstudio.so" "x86_64/libfmodstudio.so"
    else
        if [ -d "x86_64" ]; then
            itemDelete "x86_64/libfmodstudio.so"
        fi
    fi

    popd >/dev/null
}

# ----------------------------------------------------------------------------------------------------
setupiOS() {
    # Nothing to do here. Under "ios": {"mode": "native"} the FMOD Studio iOS static
    # libraries are linked straight from the vendored SDK by source/third_party/CMakeLists.txt,
    # so there is no iOSSource folder to stage into.
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
optionGetValue "androidSdkHash" ANDROID_SDK_HASH

# SDK Paths
optionGetValue "androidSdkPath" ANDROID_SDK_PATH

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
