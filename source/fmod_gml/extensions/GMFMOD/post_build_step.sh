#!/bin/bash

sed -i -e 's/\r$//' "$(dirname "$0")/scriptUtils.sh"
chmod +x "$(dirname "$0")/scriptUtils.sh"
source "$(dirname "$0")/scriptUtils.sh"

# ######################################################################################
# Script Functions
#
# GMFMOD ships the FMOD Core runtime only. The FMOD Studio runtime is shipped by
# the separate GMFMODStudio extension when the project uses it.

# ----------------------------------------------------------------------------------------------------
setupmacOS() {

    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$MACOS_SDK_PATH" SDK_PATH

    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/libfmodL.dylib"

    if [ ! -e "$SDK_CORE_SOURCE" ]; then
        logError "Not found: $SDK_CORE_SOURCE"
    elif xattr -p com.apple.quarantine "$SDK_CORE_SOURCE" >/dev/null 2>&1; then
        logWarning "'$(basename "$SDK_CORE_SOURCE")' is quarantined. Removing com.apple.quarantine…"
        if xattr -d com.apple.quarantine "$SDK_CORE_SOURCE" >/dev/null 2>&1; then
            logInformation "Removed quarantine from '$SDK_CORE_SOURCE'"
        else
            logError "Failed to remove quarantine from '$SDK_CORE_SOURCE' (permissions/path?)."
        fi
    fi

    # assertFileHashEquals $SDK_CORE_SOURCE $MACOS_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying macOS (64 bit) dependencies"
    if [[ "$YYTARGET_runtime" == "VM" ]]; then

        # Assert if xcode-tools are installed (required)
        assertXcodeToolsInstalled

        # Code sign the original library binary
        codesign -s "${YYPLATFORM_option_mac_signing_identity}" -f --timestamp --verbose --options runtime "./libGMFMOD.dylib"

        # Copy and code sign dependencies
        itemCopyTo "$SDK_CORE_SOURCE" "./libfmodL.dylib"
        codesign -s "${YYPLATFORM_option_mac_signing_identity}" -f --timestamp --verbose --options runtime "./libfmodL.dylib"

        # If there is an extra game.zip file here then this is a package command
        # Update the libraries inside the zip file (used for packaging)
        if [ -f "./game.zip" ]; then
            TEMP_FOLDER="${YYprojectName}___temp___"

            mkdir "./${TEMP_FOLDER}"

            itemCopyTo "./libGMFMOD.dylib" "${TEMP_FOLDER}/assets/libGMFMOD.dylib"
            itemCopyTo "./libfmodL.dylib" "${TEMP_FOLDER}/assets/libfmodL.dylib"

            zipUpdate "${TEMP_FOLDER}" "game.zip"
            rm -r ${TEMP_FOLDER}
        fi
    else

        # When running from CI the 'YYprojectName' will not be set use 'YYprojectPath' instead.
        if [ -z "$YYprojectName" ]; then
            YYprojectName=$(basename "${YYprojectPath%.*}")
        fi

        # Replace spaces with underscores (this matches the assetcompiler output)
        YYfixedProjectName="${YYprojectName// /_}"

        itemCopyTo "$SDK_CORE_SOURCE" "${YYfixedProjectName}/${YYfixedProjectName}/Supporting Files/libfmodL.dylib"
    fi
}

setupMac() {
    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$MACOS_SDK_PATH" SDK_PATH

    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/libfmodL.dylib"

    if [ ! -e "$SDK_CORE_SOURCE" ]; then
        logError "Not found: $SDK_CORE_SOURCE"
    elif xattr -p com.apple.quarantine "$SDK_CORE_SOURCE" >/dev/null 2>&1; then
        logWarning "'$(basename "$SDK_CORE_SOURCE")' is quarantined. Removing com.apple.quarantine…"
        if xattr -d com.apple.quarantine "$SDK_CORE_SOURCE" >/dev/null 2>&1; then
            logInformation "Removed quarantine from '$SDK_CORE_SOURCE'"
        else
            logError "Failed to remove quarantine from '$SDK_CORE_SOURCE' (permissions/path?)."
        fi
    fi

    echo "Copying macOS (64 bit) dependencies"

    pushd "./build/assets/" >/dev/null

    # Assert if xcode-tools are installed (required)
    assertXcodeToolsInstalled

    # Code sign the original library binary
    codesign -s "${YYPLATFORM_option_mac_signing_identity}" -f --timestamp --verbose --options runtime "./libGMFMOD.dylib"

    # Copy and code sign dependencies
    itemCopyTo "$SDK_CORE_SOURCE" "./libfmodL.dylib"
    codesign -s "${YYPLATFORM_option_mac_signing_identity}" -f --timestamp --verbose --options runtime "./libfmodL.dylib"

    popd >/dev/null
}

# ----------------------------------------------------------------------------------------------------
setupLinux() {

    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$LINUX_SDK_PATH" SDK_PATH

    # Get library file path
    SDK_CORE_SOURCE="$SDK_PATH/api/core/lib/x86_64/libfmod.so.14"

    # assertFileHashEquals $SDK_CORE_SOURCE $LINUX_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying Linux (64 bit) dependencies"

    # When running from CLI 'YYprojectName' will not be set, use 'YYprojectPath' instead.
    if [ -z "$YYprojectName" ]; then
        YYprojectName=$(basename "${YYprojectPath%.*}")
    fi

    TEMP_FOLDER="${YYprojectName}___temp___"

    mkdir "./${TEMP_FOLDER}"
    itemCopyTo "$SDK_CORE_SOURCE" "${TEMP_FOLDER}/assets/libfmod.so.14"
    zipUpdate "${TEMP_FOLDER}" "${YYprojectName}.zip"
    rm -r ${TEMP_FOLDER}
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
    else
        if [ -d "arm64-v8a" ]; then
            itemDelete "arm64-v8a/libfmodL.so"
        fi
    fi

    # Handle armeabi-v7a architecture
    if [[ "$YYPLATFORM_option_android_arch_armv7" == "True" ]]; then
        echo "Copying Android (armeabi-v7a) dependencies"
        [[ ! -d "armeabi-v7a/" ]] && mkdir "armeabi-v7a"
        [[ ! -f "armeabi-v7a/libfmodL.so" ]] && itemCopyTo "$SDK_PATH/api/core/lib/armeabi-v7a/libfmodL.so" "armeabi-v7a/libfmodL.so"
    else
        if [ -d "armeabi-v7a" ]; then
            itemDelete "armeabi-v7a/libfmodL.so"
        fi
    fi

    # Handle x86-64 architecture
    if [[ "$YYPLATFORM_option_android_arch_x86_64" == "True" ]]; then
        echo "Copying Android (x86-64) dependencies"
        [[ ! -d "x86-64" ]] && mkdir "x86-64"
        [[ ! -f "x86-64/libfmodL.so" ]] && itemCopyTo "$SDK_PATH/api/core/lib/x86-64/libfmodL.so" "x86-64/libfmodL.so"
    else
        if [ -d "x86-64" ]; then
            itemDelete "x86-64/libfmodL.so"
        fi
    fi

    popd >/dev/null
}

# ----------------------------------------------------------------------------------------------------
# iOS / tvOS / Xbox / Playstation / Switch stage their dependencies in pre_build_step.
setupiOS() { :; }
setuptvOS() { :; }
setupXbox() { :; }
setupPlaystation() { :; }
setupSwitch() { :; }
setupSwitch2() { :; }

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
optionGetValue "switch2SdkHash" SWITCH2_SDK_HASH

# SDK Paths
optionGetValue "winSdkPath" WIN_SDK_PATH
optionGetValue "macosSdkPath" MACOS_SDK_PATH
optionGetValue "linuxSdkPath" LINUX_SDK_PATH
optionGetValue "iosSdkPath" IOS_SDK_PATH
optionGetValue "androidSdkPath" ANDROID_SDK_PATH
optionGetValue "gdkSdkPath" GDK_SDK_PATH
optionGetValue "ps4SdkPath" PS4_SDK_PATH
optionGetValue "ps5SdkPath" PS5_SDK_PATH
optionGetValue "switchSdkPath" SWITCH_SDK_PATH
optionGetValue "switch2SdkPath" SWITCH2_SDK_PATH

# Error String
ERROR_SDK_HASH="Invalid FMOD SDK version, sha256 hash mismatch (expected v$SDK_VERSION)."

# Ensure we are on the output path
pushd "$YYoutputFolder" >/dev/null

# Call setup method depending on the platform
setup$YYPLATFORM_name

popd >/dev/null

exit 0
