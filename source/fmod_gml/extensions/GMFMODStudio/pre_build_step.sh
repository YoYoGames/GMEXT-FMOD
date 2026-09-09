#!/bin/bash

sed -i -e 's/\r$//' "$(dirname "$0")/scriptUtils.sh"
chmod +x "$(dirname "$0")/scriptUtils.sh"
source "$(dirname "$0")/scriptUtils.sh"

# ######################################################################################
# Script Functions
#
# GMFMODStudio ships the FMOD Studio runtime only. The FMOD Core runtime is
# GMFMOD's responsibility - that extension is always present when this one is
# used - and console targets are GMFMOD's too. Nothing has to be staged before
# the build; the Studio runtime is copied in post_build_step.

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
    # Nothing to do here
    :
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
