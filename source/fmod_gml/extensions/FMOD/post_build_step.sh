#!/bin/bash

sed -i -e 's/\r$//' "$(dirname "$0")/scriptUtils.sh"
chmod +x "$(dirname "$0")/scriptUtils.sh"
source "$(dirname "$0")/scriptUtils.sh"

# ######################################################################################
# Script Functions

# ----------------------------------------------------------------------------------------------------
setupmacOS() {

    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$MACOS_SDK_PATH" SDK_PATH

    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/libfmodL.dylib"
    SDK_STUDIO_SOURCE="$SDK_PATH/api/studio/lib/libfmodstudioL.dylib"

    # assertFileHashEquals $SDK_CORE_SOURCE $MACOS_SDK_HASH "$ERROR_SDK_HASH"
    
    echo "Copying macOS (64 bit) dependencies"
    if [[ "$YYTARGET_runtime" == "VM" ]]; then

        # Assert if xcode-tools are installed (required)
        assertXcodeToolsInstalled

        itemCopyTo "$SDK_CORE_SOURCE" "./libfmodL.dylib"
        codesign -s "${YYPLATFORM_option_mac_signing_identity}" -f --timestamp --verbose --options runtime "./libfmodL.dylib"

        if [[ $ENABLE_STUDIO_FLAG == 1 ]]; then
            itemCopyTo "$SDK_STUDIO_SOURCE" "./libfmodstudioL.dylib"
            codesign -s "${YYPLATFORM_option_mac_signing_identity}" -f --timestamp --verbose --options runtime "./libfmodstudioL.dylib"
        fi
    else
        itemCopyTo "$SDK_CORE_SOURCE" "${YYprojectName}/${YYprojectName}/Supporting Files/libfmodL.dylib"

        if [[ $ENABLE_STUDIO_FLAG == 1 ]]; then
            itemCopyTo "$SDK_STUDIO_SOURCE" "${YYprojectName}/${YYprojectName}/Supporting Files/libfmodstudioL.dylib"
        fi
    fi
}

# ----------------------------------------------------------------------------------------------------
setupLinux() {

    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$LINUX_SDK_PATH" SDK_PATH

    # Get library file paths
    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/x86_64/libfmod.so.13"
    SDK_STUDIO_SOURCE="$SDK_PATH/api/studio/lib/x86_64/libfmodstudio.so.13"

    # assertFileHashEquals $SDK_CORE_SOURCE $LINUX_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying Linux (64 bit) dependencies"
    
    # When running from CLI 'YYprojectName' will not be set, use 'YYprojectPath' instead.
    if [ -z "$YYprojectName" ]; then
        YYprojectName=$(basename "${YYprojectPath%.*}")
    fi

    fileExtract "${YYprojectName}.zip" "_temp"

    if [[ ! -f "_temp/assets/libfmod.so.13" ]]; then 
        itemCopyTo "$SDK_CORE_SOURCE" "_temp/assets/libfmod.so.13"

        # Copy studio libs if enabled
        if [[$ENABLE_STUDIO_FLAG == 1]]; then
            [[ ! -f "_temp/assets/libfmodstudio.so.13" ]] && itemCopyTo "$SDK_STUDIO_SOURCE" "_temp/assets/libfmodstudio.so.13"
        fi
    fi

    folderCompress "_temp" "${YYprojectName}.zip"
    rm -r _temp
}

# ----------------------------------------------------------------------------------------------------
setupAndroid() {    
    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$ANDROID_SDK_PATH" SDK_PATH

    # assertFileHashEquals "$SDK_PATH/api/core/lib/arm64-v8a/libfmodL.so" $ANDROID_SDK_HASH "$ERROR_SDK_HASH"

    pushd "$ExtensionPath/AndroidSource/libs" >/dev/null

    # Handle arm64-v8a architecture
    if [[ "$YYPLATFORM_option_android_arch_arm64" == "True" ]]; then
        echo "Copying Android (arm64-v8a) dependencies"
        [[ ! -d "arm64-v8a/" ]] && mkdir "arm64-v8a"
        [[ ! -f "arm64-v8a/libfmodL.so" ]] && itemCopyTo "$SDK_PATH/api/core/lib/arm64-v8a/libfmodL.so" "arm64-v8a/libfmodL.so"
        [[ ! -f "arm64-v8a/libfmodL.so" ]] && itemCopyTo "$SDK_PATH/api/studio/lib/arm64-v8a/libfmodstudioL.so" "arm64-v8a/libfmodstudioL.so"
    else
        if exist "arm64-v8a"; then
            itemDelete "arm64-v8a/libfmodL.so"
            itemDelete "arm64-v8a/libfmodstudioL.so"
        fi
    fi

    # Handle armeabi-v7a architecture
    if [[ "$YYPLATFORM_option_android_arch_armv7" == "True" ]]; then
        echo "Copying Android (armeabi-v7a) dependencies"
        [[ ! -d "armeabi-v7a/" ]] && mkdir "armeabi-v7a"
        [[ ! -f "armeabi-v7a/libfmodL.so" ]] && itemCopyTo "$SDK_PATH/api/core/lib/armeabi-v7a/libfmodL.so" "armeabi-v7a/libfmodL.so"
        [[ ! -f "armeabi-v7a/libfmodstudioL.so" ]] && itemCopyTo "$SDK_PATH/api/studio/lib/armeabi-v7a/libfmodstudioL.so" "armeabi-v7a/libfmodstudioL.so"
    else
        if exist "armeabi-v7a"; then
            itemDelete "armeabi-v7a/libfmodL.so"
            itemDelete "armeabi-v7a/libfmodstudioL.so"
        fi
    fi

    # Handle x86-64 architecture
    if [[ "$YYPLATFORM_option_android_arch_x86_64" == "True" ]]; then
        echo "Copying Android (x86-64) dependencies"
        [[ ! -d "x86-64" ]] && mkdir "x86-64"
        [[ ! -f "x86-64/libfmodL.so" ]] && itemCopyTo "$SDK_PATH/api/core/lib/x86-64/libfmodL.so" "x86-64/libfmodL.so"
        [[ ! -f "x86-64/libfmodstudioL.so" ]] && itemCopyTo "$SDK_PATH/api/studio/lib/x86-64/libfmodstudioL.so" "x86-64/libfmodstudioL.so"
    else
        if exist "x86-64"; then
            itemDelete "x86-64/libfmodL.so"
            itemDelete "x86-64/libfmodstudioL.so"
        fi
    fi

    popd >/dev/null
}

# ----------------------------------------------------------------------------------------------------
setupiOS() {
    # Nothing to do here
    :
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
optionGetValue "winSdkHash" WIN_SDK_HASH
optionGetValue "macosSdkHash" MACOS_SDK_HASH
optionGetValue "linuxSdkHash" LINUX_SDK_HASH
optionGetValue "iosSdkHash" IOS_SDK_HASH
optionGetValue "androidSdkHash" ANDROID_SDK_HASH
optionGetValue "xboxOneSdkHash" XBOX_ONE_SDK_HASH
optionGetValue "xboxSeriesSdkHash" XBOX_SERIES_SDK_HASH
optionGetValue "ps4SdkHash" PS4_SDK_HASH
optionGetValue "ps5SdkHash" PS5_SDK_HASH
optionGetValue "switchSdkHash" SWITCH_SDK_HASH

# SDK Paths
optionGetValue "winSdkPath" WIN_SDK_PATH
optionGetValue "macosSdkPath" MACOS_SDK_PATH
optionGetValue "linuxSdkPath" LINUX_SDK_PATH
optionGetValue "iosSdkPath" IOS_SDK_PATH
optionGetValue "androidSdkPath" ANDROID_SDK_PATH
optionGetValue "xboxSdkPath" XBOX_SDK_PATH
optionGetValue "ps4SdkPath" PS4_SDK_PATH
optionGetValue "ps5SdkPath" PS5_SDK_PATH
optionGetValue "switchSdkPath" SWITCH_SDK_PATH

# Enable Studio?
optionGetValue "enableStudio" ENABLE_STUDIO
ENABLE_STUDIO_FLAG=1
if [[ "$ENABLE_STUDIO" == "True" ]]; then 
    ENABLE_STUDIO_FLAG=1
fi

# Error String
ERROR_SDK_HASH="Invalid FMOD SDK version, sha256 hash mismatch (expected v$SDK_VERSION)."

# Checks IDE and Runtime versions
versionLockCheck "$YYruntimeVersion" $RUNTIME_VERSION_STABLE $RUNTIME_VERSION_BETA $RUNTIME_VERSION_DEV $RUNTIME_VERSION_LTS

# Ensure we are on the output path
pushd "$YYoutputFolder" >/dev/null

# Call setup method depending on the platform
# NOTE: the setup method can be (:setupmacOS or :setupLinux)
setup$YYPLATFORM_name

popd >/dev/null

exit 0
