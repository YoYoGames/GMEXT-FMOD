# Xbox One (GDK) pre-project setup
# Included before project() when EXTGEN_PLATFORM_XBOX_ONE=ON.
#
# GDK requires ASLR (DYNAMICBASE) on ALL binaries, including CMake's internal
# compiler-test executables that run during the project() call. These flags
# must be set here (before project()) to avoid the configure-time error:
#   "Platform Gaming.Xbox.XboxOne.x64 requires Address Space Layout
#    Randomization (ASLR). Remove /DYNAMICBASE:NO or adjust linker settings."
#
# The GDK toolchain itself (include paths, lib paths, platform defines) is
# auto-injected by Visual Studio via the Gaming.Xbox.XboxOne.x64 platform
# architecture - no manual SDK path setup is required here.

set(CMAKE_EXE_LINKER_FLAGS_INIT    "/DYNAMICBASE /NXCOMPAT")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "/DYNAMICBASE /NXCOMPAT")
