#!/bin/bash

sed -i -e 's/\r$//' "$(dirname "$0")/scriptUtils.sh"
chmod +x "$(dirname "$0")/scriptUtils.sh"
source "$(dirname "$0")/scriptUtils.sh"

# ######################################################################################
# Script Functions
#
# GMFMODStudio targets desktop only (Windows / macOS / Linux) and ships the FMOD
# Studio runtime only. The FMOD Core runtime is GMFMOD's responsibility - that
# extension is always present when this one is used.

# ----------------------------------------------------------------------------------------------------
setupWindows() {
    # Nothing to do here - the Windows runtime is copied by post_build_step.bat
    :
}

# ----------------------------------------------------------------------------------------------------
# Sign with the hardened runtime so the export passes notarization. Only signs when an identity is
# set, so unsigned local builds still succeed.
_fmodstudio_codesign() {
    local target="$1"

    [ -f "$target" ] || return 0

    if [ -n "${YYPLATFORM_option_mac_signing_identity}" ]; then
        assertXcodeToolsInstalled
        codesign -s "${YYPLATFORM_option_mac_signing_identity}" -f --timestamp --verbose --options runtime "$target"
    else
        logWarning "No mac signing identity set; skipping explicit signing of '$(basename "$target")' (GameMaker will sign the bundle)."
    fi
}

# ----------------------------------------------------------------------------------------------------
setupmacOS() {

    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$MACOS_SDK_PATH" SDK_PATH

    SDK_STUDIO_SOURCE="$SDK_PATH/api/studio/lib/libfmodstudioL.dylib"

    if [ ! -e "$SDK_STUDIO_SOURCE" ]; then
        logError "Not found: $SDK_STUDIO_SOURCE"
    elif xattr -p com.apple.quarantine "$SDK_STUDIO_SOURCE" >/dev/null 2>&1; then
        logWarning "'$(basename "$SDK_STUDIO_SOURCE")' is quarantined. Removing com.apple.quarantine..."
        if xattr -d com.apple.quarantine "$SDK_STUDIO_SOURCE" >/dev/null 2>&1; then
            logInformation "Removed quarantine from '$SDK_STUDIO_SOURCE'"
        else
            logError "Failed to remove quarantine from '$SDK_STUDIO_SOURCE' (permissions/path?)."
        fi
    fi

    # assertFileHashEquals $SDK_STUDIO_SOURCE $MACOS_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying macOS (64 bit) dependencies"
    if [[ "$YYTARGET_runtime" == "VM" ]]; then

        # Code sign the original library binary
        _fmodstudio_codesign "./libGMFMODStudio.dylib"

        # Copy and code sign dependencies
        itemCopyTo "$SDK_STUDIO_SOURCE" "./libfmodstudioL.dylib"
        _fmodstudio_codesign "./libfmodstudioL.dylib"

        # If there is an extra game.zip file here then this is a package command
        # Update the libraries inside the zip file (used for packaging)
        if [ -f "./game.zip" ]; then
            TEMP_FOLDER="${YYprojectName}___temp___"

            mkdir "./${TEMP_FOLDER}"

            itemCopyTo "./libGMFMODStudio.dylib" "${TEMP_FOLDER}/assets/libGMFMODStudio.dylib"
            itemCopyTo "./libfmodstudioL.dylib" "${TEMP_FOLDER}/assets/libfmodstudioL.dylib"

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

        itemCopyTo "$SDK_STUDIO_SOURCE" "${YYfixedProjectName}/${YYfixedProjectName}/Supporting Files/libfmodstudioL.dylib"
    fi
}

setupMac() {
    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$MACOS_SDK_PATH" SDK_PATH

    SDK_STUDIO_SOURCE="$SDK_PATH/api/studio/lib/libfmodstudioL.dylib"

    if [ ! -e "$SDK_STUDIO_SOURCE" ]; then
        logError "Not found: $SDK_STUDIO_SOURCE"
    elif xattr -p com.apple.quarantine "$SDK_STUDIO_SOURCE" >/dev/null 2>&1; then
        logWarning "'$(basename "$SDK_STUDIO_SOURCE")' is quarantined. Removing com.apple.quarantine..."
        if xattr -d com.apple.quarantine "$SDK_STUDIO_SOURCE" >/dev/null 2>&1; then
            logInformation "Removed quarantine from '$SDK_STUDIO_SOURCE'"
        else
            logError "Failed to remove quarantine from '$SDK_STUDIO_SOURCE' (permissions/path?)."
        fi
    fi

    echo "Copying macOS (64 bit) dependencies"

    pushd "./build/assets/" >/dev/null

    # Code sign the original library binary
    _fmodstudio_codesign "./libGMFMODStudio.dylib"

    # Copy and code sign dependencies
    itemCopyTo "$SDK_STUDIO_SOURCE" "./libfmodstudioL.dylib"
    _fmodstudio_codesign "./libfmodstudioL.dylib"
    popd >/dev/null
}

# ----------------------------------------------------------------------------------------------------
setupLinux() {

    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$LINUX_SDK_PATH" SDK_PATH

    # Get library file path
    SDK_STUDIO_SOURCE="$SDK_PATH/api/studio/lib/x86_64/libfmodstudioL.so.14"

    # assertFileHashEquals $SDK_STUDIO_SOURCE $LINUX_SDK_HASH "$ERROR_SDK_HASH"

    echo "Copying Linux (64 bit) dependencies"

    # When running from CLI 'YYprojectName' will not be set, use 'YYprojectPath' instead.
    if [ -z "$YYprojectName" ]; then
        YYprojectName=$(basename "${YYprojectPath%.*}")
    fi

    TEMP_FOLDER="${YYprojectName}___temp___"

    mkdir "./${TEMP_FOLDER}"
    itemCopyTo "$SDK_STUDIO_SOURCE" "${TEMP_FOLDER}/assets/libfmodstudioL.so.14"
    zipUpdate "${TEMP_FOLDER}" "${YYprojectName}.zip"
    rm -r ${TEMP_FOLDER}
}

# ----------------------------------------------------------------------------------------------------
setupAndroid() {
    # Resolve the SDK path (must exist)
    pathResolveExisting "$YYprojectDir" "$ANDROID_SDK_PATH" SDK_PATH

    # assertFileHashEquals "$SDK_PATH/api/studio/lib/arm64-v8a/libfmodstudioL.so" $ANDROID_SDK_HASH "$ERROR_SDK_HASH"

    pushd "$ExtensionPath/AndroidSource/libs" >/dev/null

    # No fmod.jar and no libfmodL.so here - GMFMOD stages both, and a second copy
    # at the same path in the same APK is a duplicate-class build failure.

    # Handle arm64-v8a architecture
    if [[ "$YYPLATFORM_option_android_arch_arm64" == "True" ]]; then
        echo "Copying Android (arm64-v8a) dependencies"
        [[ ! -d "arm64-v8a/" ]] && mkdir "arm64-v8a"
        itemCopyTo "$SDK_PATH/api/studio/lib/arm64-v8a/libfmodstudioL.so" "arm64-v8a/libfmodstudioL.so"
    else
        if [ -d "arm64-v8a" ]; then
            itemDelete "arm64-v8a/libfmodstudioL.so"
        fi
    fi

    # Handle armeabi-v7a architecture
    if [[ "$YYPLATFORM_option_android_arch_armv7" == "True" ]]; then
        echo "Copying Android (armeabi-v7a) dependencies"
        [[ ! -d "armeabi-v7a/" ]] && mkdir "armeabi-v7a"
        itemCopyTo "$SDK_PATH/api/studio/lib/armeabi-v7a/libfmodstudioL.so" "armeabi-v7a/libfmodstudioL.so"
    else
        if [ -d "armeabi-v7a" ]; then
            itemDelete "armeabi-v7a/libfmodstudioL.so"
        fi
    fi

    # Handle x86_64 architecture
    if [[ "$YYPLATFORM_option_android_arch_x86_64" == "True" ]]; then
        echo "Copying Android (x86_64) dependencies"
        [[ ! -d "x86_64" ]] && mkdir "x86_64"
        itemCopyTo "$SDK_PATH/api/studio/lib/x86_64/libfmodstudioL.so" "x86_64/libfmodstudioL.so"
    else
        if [ -d "x86_64" ]; then
            itemDelete "x86_64/libfmodstudioL.so"
        fi
    fi

    popd >/dev/null
}

# ----------------------------------------------------------------------------------------------------
# The iOS static libraries are linked at build time - nothing to stage.
setupiOS() { :; }

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
optionGetValue "androidSdkHash" ANDROID_SDK_HASH
optionGetValue "iosSdkHash" IOS_SDK_HASH

# SDK Paths
optionGetValue "winSdkPath" WIN_SDK_PATH
optionGetValue "macosSdkPath" MACOS_SDK_PATH
optionGetValue "linuxSdkPath" LINUX_SDK_PATH
optionGetValue "androidSdkPath" ANDROID_SDK_PATH
optionGetValue "iosSdkPath" IOS_SDK_PATH

# Error String
ERROR_SDK_HASH="Invalid FMOD SDK version, sha256 hash mismatch (expected v$SDK_VERSION)."

# Ensure we are on the output path
pushd "$YYoutputFolder" >/dev/null

# Call setup method depending on the platform
setup$YYPLATFORM_name

popd >/dev/null

exit 0
