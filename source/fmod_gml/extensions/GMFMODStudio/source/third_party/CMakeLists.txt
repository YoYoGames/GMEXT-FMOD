cmake_minimum_required(VERSION 3.18)

# =============================================================================
# third_party: wires the vendored FMOD SDK into a single INTERFACE target
# (ext_third_party) for every supported platform.
#
# FMOD ships two libraries per platform: "core" (fmod) and "studio"
# (fmodstudio), where studio depends on core. FMOD ships no Debug/Release split -
# the only variant axis its binaries expose is logging (the L suffix) vs
# non-logging - and this extension always links the non-logging build. See the
# _FMOD_CORE_LIB note below.
# =============================================================================

add_library(ext_third_party INTERFACE)

# -----------------------------------------------------------------------------
# FMOD SDK root
# -----------------------------------------------------------------------------
set(FMOD_SDK_ROOT
    ""
    CACHE PATH
          "Path to the FMOD SDK root (folder containing 'FMOD Studio API <Platform>' dirs)"
)
if(NOT FMOD_SDK_ROOT)
  get_filename_component(
    FMOD_SDK_ROOT "${CMAKE_CURRENT_LIST_DIR}/../../../../../fmod_sdk"
    ABSOLUTE)
endif()

# The console handlers in pre_build_step.bat hand the platform folder they
# resolved from the extension's SDK-path option straight through as
# FMOD_SDK_PLATFORM_DIR, so the option and the build agree on one SDK. Left
# empty - the desktop and mobile presets, or a console configure run by hand -
# the platform's own folder under FMOD_SDK_ROOT is used.
set(FMOD_SDK_PLATFORM_DIR
    ""
    CACHE PATH
          "Path to the 'FMOD Studio API <Platform>' folder to build against (consoles only; empty = the platform's folder under FMOD_SDK_ROOT)"
)

# FMOD ships a logging build of each library alongside the normal one - fmodL
# next to fmod. It is a development aid: extra validation, verbose output, and
# the only build in which fmod_debug_initialize() does anything.
#
# The extension always links the non-logging build, and there is deliberately no
# switch for it. Shipping the L build was reported as a bug against the pre-port
# extension, and it is not a choice an end user could make anyway: the basename
# is baked into the wrapper's PE import table / ELF DT_NEEDED at link time, so
# picking the other one means a different GMFMODStudio binary, not a different
# setting. A GameMaker extension option is a runtime value and cannot rewrite a
# prebuilt binary's imports or change which files get packaged.
#
# GMFMOD does the same. Both extensions load into one process, and mixing
# the two builds would give it two separate copies of FMOD Core - an
# FMOD::System created by one being meaningless to the other, which breaks
# fmod_studio_system_get_core_system_ptr() -> fmod_system_adopt().
set(_FMOD_CORE_LIB "fmod")
set(_FMOD_STUDIO_LIB "fmodstudio")

message(STATUS "[third_party] FMOD_SDK_ROOT = ${FMOD_SDK_ROOT}")

# List of runtime files to bubble up to parent
set(_EXT_TP_RUNTIME_DLLS "")

# Helper: map single-configs to Release
set(_MAP_REL_CONFIGS "Release")
# Helper macro to append runtime(s)
function(_ext_tp_append_runtime)
  foreach(_f IN LISTS ARGN)
    if(_f)
      list(APPEND _EXT_TP_RUNTIME_DLLS "${_f}")
    endif()
  endforeach()
  set(_EXT_TP_RUNTIME_DLLS
      "${_EXT_TP_RUNTIME_DLLS}"
      PARENT_SCOPE)
endfunction()

# Helper (Linux only): resolve the actual .so on disk for a given basename.
# Not every arch ships the unversioned dev symlink (only x86_64 does), so
# fall back to whatever versioned file is present.
function(_fmod_resolve_so outVar dir basename)
  set(_direct "${dir}/lib${basename}.so")
  if(EXISTS "${_direct}")
    set(${outVar}
        "${_direct}"
        PARENT_SCOPE)
    return()
  endif()
  file(GLOB _versioned "${dir}/lib${basename}.so.*")
  list(SORT _versioned)
  list(LENGTH _versioned _cnt)
  if(_cnt GREATER 0)
    list(GET _versioned 0 _first)
    set(${outVar}
        "${_first}"
        PARENT_SCOPE)
  else()
    set(${outVar}
        "${_direct}"
        PARENT_SCOPE)
  endif()
endfunction()

# Helper (consoles): the platform SDK folder - FMOD_SDK_PLATFORM_DIR when set,
# else the named folder under FMOD_SDK_ROOT.
function(_fmod_platform_root outVar folderName)
  if(FMOD_SDK_PLATFORM_DIR)
    get_filename_component(_dir "${FMOD_SDK_PLATFORM_DIR}" ABSOLUTE)
  else()
    set(_dir "${FMOD_SDK_ROOT}/${folderName}")
  endif()
  set(${outVar}
      "${_dir}"
      PARENT_SCOPE)
endfunction()

# =============================================================================
# CONSOLES - checked before WIN32. Every console preset runs through the Visual
# Studio generator with CMAKE_SYSTEM_NAME left as "Windows", so WIN32 is TRUE
# for all of them; the EXTGEN_IS_* flags come from the generated CMakeLists.txt.
# The runtime (fmodstudio.dll, libfmodstudio.prx) is staged by
# pre_build_step.bat, not here.
# =============================================================================
if(EXTGEN_IS_XBOX_ONE OR EXTGEN_IS_XBOX_SCARLETT)
  # ----------------------
  # Xbox One / Xbox Series (GDK) - one "Game Core" SDK, a lib folder per console
  # ----------------------
  _fmod_platform_root(_FMOD_GDK_ROOT "FMOD Studio API Game Core")
  if(EXTGEN_IS_XBOX_ONE)
    set(_FMOD_GDK_ARCH "xboxone")
  else()
    set(_FMOD_GDK_ARCH "scarlett")
  endif()
  set(_FMOD_GDK_CORE_LIB_DIR "${_FMOD_GDK_ROOT}/api/core/lib/${_FMOD_GDK_ARCH}")
  set(_FMOD_GDK_STUDIO_LIB_DIR "${_FMOD_GDK_ROOT}/api/studio/lib/${_FMOD_GDK_ARCH}")

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_GDK_ROOT}/api/core/inc"
                              "${_FMOD_GDK_ROOT}/api/studio/inc")

  # Import libraries by path, as on Windows. The GDK SDK names them fmod.lib
  # and fmodstudio.lib.
  set(_FMOD_GDK_CORE_IMPLIB "${_FMOD_GDK_CORE_LIB_DIR}/${_FMOD_CORE_LIB}.lib")
  set(_FMOD_GDK_STUDIO_IMPLIB
      "${_FMOD_GDK_STUDIO_LIB_DIR}/${_FMOD_STUDIO_LIB}.lib")
  foreach(_lib IN ITEMS "${_FMOD_GDK_CORE_IMPLIB}" "${_FMOD_GDK_STUDIO_IMPLIB}")
    if(NOT EXISTS "${_lib}")
      message(FATAL_ERROR "Missing FMOD import library: ${_lib}")
    endif()
  endforeach()

  # Core before Studio, as on Windows.
  target_link_libraries(ext_third_party INTERFACE "${_FMOD_GDK_CORE_IMPLIB}"
                                                  "${_FMOD_GDK_STUDIO_IMPLIB}")

# =============================================================================
# PS4 (ORBIS) / PS5 (Prospero) - weak stub archives to link, .prx at runtime
# =============================================================================
elseif(EXTGEN_IS_PS4 OR EXTGEN_IS_PS5)
  if(EXTGEN_IS_PS4)
    _fmod_platform_root(_FMOD_PS_ROOT "FMOD Studio API PS4")
  else()
    _fmod_platform_root(_FMOD_PS_ROOT "FMOD Studio API PS5")
  endif()
  set(_FMOD_PS_CORE_LIB_DIR "${_FMOD_PS_ROOT}/api/core/lib")
  set(_FMOD_PS_STUDIO_LIB_DIR "${_FMOD_PS_ROOT}/api/studio/lib")

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_PS_ROOT}/api/core/inc"
                              "${_FMOD_PS_ROOT}/api/studio/inc")

  set(_FMOD_PS_CORE_STUB "${_FMOD_PS_CORE_LIB_DIR}/lib${_FMOD_CORE_LIB}_stub_weak.a")
  set(_FMOD_PS_STUDIO_STUB
      "${_FMOD_PS_STUDIO_LIB_DIR}/lib${_FMOD_STUDIO_LIB}_stub_weak.a")
  foreach(_lib IN ITEMS "${_FMOD_PS_CORE_STUB}" "${_FMOD_PS_STUDIO_STUB}")
    if(NOT EXISTS "${_lib}")
      message(FATAL_ERROR "Missing FMOD stub library: ${_lib}")
    endif()
  endforeach()

  # The stubs are SCE ELF stubs, not regular archives. They are linked the way
  # the pre-port .vcxproj linked them - library directories plus raw "-l" flags,
  # Studio before the Core it depends on - so CMake forwards the names verbatim
  # into AdditionalDependencies. A bare name would get a ".lib" suffix on this
  # VS-generator platform.
  target_link_directories(ext_third_party INTERFACE "${_FMOD_PS_CORE_LIB_DIR}"
                                                    "${_FMOD_PS_STUDIO_LIB_DIR}")
  target_link_libraries(ext_third_party INTERFACE "-l${_FMOD_STUDIO_LIB}_stub_weak"
                                                  "-l${_FMOD_CORE_LIB}_stub_weak")

# =============================================================================
# NINTENDO SWITCH (NX64) - static libraries, nothing to stage
# =============================================================================
elseif(EXTGEN_IS_SWITCH)
  _fmod_platform_root(_FMOD_NX_ROOT "FMOD Studio API Switch")
  set(_FMOD_NX_CORE_LIB_DIR "${_FMOD_NX_ROOT}/api/core/lib/nx64")
  set(_FMOD_NX_STUDIO_LIB_DIR "${_FMOD_NX_ROOT}/api/studio/lib/nx64")

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_NX_ROOT}/api/core/inc"
                              "${_FMOD_NX_ROOT}/api/studio/inc")

  set(_FMOD_NX_CORE_LIB "${_FMOD_NX_CORE_LIB_DIR}/lib${_FMOD_CORE_LIB}.a")
  set(_FMOD_NX_STUDIO_LIB "${_FMOD_NX_STUDIO_LIB_DIR}/lib${_FMOD_STUDIO_LIB}.a")
  foreach(_lib IN ITEMS "${_FMOD_NX_CORE_LIB}" "${_FMOD_NX_STUDIO_LIB}")
    if(NOT EXISTS "${_lib}")
      message(FATAL_ERROR "Missing FMOD static library: ${_lib}")
    endif()
  endforeach()

  # Static archives: Studio before the Core it depends on.
  target_link_libraries(ext_third_party INTERFACE "${_FMOD_NX_STUDIO_LIB}"
                                                  "${_FMOD_NX_CORE_LIB}")

# =============================================================================
# WINDOWS (MSVC/ClangCL) - x64 only
# =============================================================================
elseif(WIN32)
  set(_FMOD_WIN_ROOT "${FMOD_SDK_ROOT}/FMOD Studio API Windows")
  set(_FMOD_WIN_CORE_LIB_DIR "${_FMOD_WIN_ROOT}/api/core/lib/x64")
  set(_FMOD_WIN_STUDIO_LIB_DIR "${_FMOD_WIN_ROOT}/api/studio/lib/x64")

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_WIN_ROOT}/api/core/inc"
                               "${_FMOD_WIN_ROOT}/api/studio/inc")

  # Link the import library by path instead of declaring a SHARED IMPORTED
  # target. An imported target carrying IMPORTED_LOCATION is picked up by
  # $<TARGET_RUNTIME_DLLS:> in the generated
  # cmake/windows/extgen_post_build.cmake, which copies FMOD's redistributable
  # into the extension folder. It does that independently of
  # EXT_TP_RUNTIME_DLLS, so there is no staging call to remove - the target
  # itself has to go. Staging the runtime is post_build_step.bat's job.
  # Same shape as GMEXT-Steamworks.
  set(_FMOD_WIN_CORE_IMPLIB
      "${_FMOD_WIN_CORE_LIB_DIR}/${_FMOD_CORE_LIB}_vc.lib")
  set(_FMOD_WIN_STUDIO_IMPLIB
      "${_FMOD_WIN_STUDIO_LIB_DIR}/${_FMOD_STUDIO_LIB}_vc.lib")
  foreach(_lib IN ITEMS "${_FMOD_WIN_CORE_IMPLIB}" "${_FMOD_WIN_STUDIO_IMPLIB}")
    if(NOT EXISTS "${_lib}")
      message(FATAL_ERROR "Missing FMOD import library: ${_lib}")
    endif()
  endforeach()

  # Core before Studio: Studio's import lib depends on Core's symbols, and the
  # ordering used to come from target_link_libraries(fmod_studio ... fmod_core).
  target_link_libraries(ext_third_party INTERFACE "${_FMOD_WIN_CORE_IMPLIB}"
                                                  "${_FMOD_WIN_STUDIO_IMPLIB}")

  # No runtime staging here: on desktop that is the build-step scripts' job, and
  # copying the SDK into the extension folder is what put FMOD's redistributables
  # into git in the first place.

# =============================================================================
# APPLE: split iOS/tvOS (mobile, static) vs macOS (desktop, dylib)
# =============================================================================
elseif(APPLE)

  if(EXTGEN_IS_APPLE_MOBILE)
    # ----------------------
    # iOS / tvOS (static libs only - no framework/xcframework is vendored)
    # ----------------------
    set(_FMOD_IOS_ROOT "${FMOD_SDK_ROOT}/FMOD Studio API iOS")
    set(_FMOD_IOS_CORE_LIB_DIR "${_FMOD_IOS_ROOT}/api/core/lib")
    set(_FMOD_IOS_STUDIO_LIB_DIR "${_FMOD_IOS_ROOT}/api/studio/lib")

    if(CMAKE_OSX_SYSROOT MATCHES "iphonesimulator")
      set(_FMOD_APPLE_SLICE "iphonesimulator")
    elseif(CMAKE_OSX_SYSROOT MATCHES "iphoneos")
      set(_FMOD_APPLE_SLICE "iphoneos")
    elseif(CMAKE_OSX_SYSROOT MATCHES "appletvsimulator")
      set(_FMOD_APPLE_SLICE "appletvsimulator")
    elseif(CMAKE_OSX_SYSROOT MATCHES "appletvos")
      set(_FMOD_APPLE_SLICE "appletvos")
    else()
      set(_FMOD_APPLE_SLICE "iphoneos")
    endif()

    target_include_directories(
      ext_third_party INTERFACE "${_FMOD_IOS_ROOT}/api/core/inc"
                                 "${_FMOD_IOS_ROOT}/api/studio/inc")

    add_library(fmod_core STATIC IMPORTED GLOBAL)
    set_target_properties(
      fmod_core
      PROPERTIES
        IMPORTED_CONFIGURATIONS "Debug;Release"
        IMPORTED_LOCATION_DEBUG
        "${_FMOD_IOS_CORE_LIB_DIR}/lib${_FMOD_CORE_LIB}_${_FMOD_APPLE_SLICE}.a"
        IMPORTED_LOCATION_RELEASE
        "${_FMOD_IOS_CORE_LIB_DIR}/lib${_FMOD_CORE_LIB}_${_FMOD_APPLE_SLICE}.a"
        MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
        MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

    add_library(fmod_studio STATIC IMPORTED GLOBAL)
    set_target_properties(
      fmod_studio
      PROPERTIES
        IMPORTED_CONFIGURATIONS "Debug;Release"
        IMPORTED_LOCATION_DEBUG
        "${_FMOD_IOS_STUDIO_LIB_DIR}/lib${_FMOD_STUDIO_LIB}_${_FMOD_APPLE_SLICE}.a"
        IMPORTED_LOCATION_RELEASE
        "${_FMOD_IOS_STUDIO_LIB_DIR}/lib${_FMOD_STUDIO_LIB}_${_FMOD_APPLE_SLICE}.a"
        MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
        MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")
    target_link_libraries(fmod_studio INTERFACE fmod_core)

    target_link_libraries(ext_third_party INTERFACE fmod_core fmod_studio)

    # FMOD's static libs require these system frameworks to link/run.
    target_link_options(ext_third_party INTERFACE "-framework" "AudioToolbox"
                         "-framework" "AVFoundation" "-framework" "CoreAudio")

    # Static libraries link directly into the binary - nothing to copy.

  else()
    # ----------------------
    # macOS (desktop) - flat, universal .dylib, no arch subdir
    # ----------------------
    set(_FMOD_MAC_ROOT "${FMOD_SDK_ROOT}/FMOD Studio API macOS")
    set(_FMOD_MAC_CORE_LIB_DIR "${_FMOD_MAC_ROOT}/api/core/lib")
    set(_FMOD_MAC_STUDIO_LIB_DIR "${_FMOD_MAC_ROOT}/api/studio/lib")

    target_include_directories(
      ext_third_party INTERFACE "${_FMOD_MAC_ROOT}/api/core/inc"
                                 "${_FMOD_MAC_ROOT}/api/studio/inc")

    add_library(fmod_core SHARED IMPORTED GLOBAL)
    set_target_properties(
      fmod_core
      PROPERTIES
        IMPORTED_CONFIGURATIONS "Debug;Release"
        IMPORTED_LOCATION_DEBUG
        "${_FMOD_MAC_CORE_LIB_DIR}/lib${_FMOD_CORE_LIB}.dylib"
        IMPORTED_LOCATION_RELEASE
        "${_FMOD_MAC_CORE_LIB_DIR}/lib${_FMOD_CORE_LIB}.dylib"
        MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
        MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

    add_library(fmod_studio SHARED IMPORTED GLOBAL)
    set_target_properties(
      fmod_studio
      PROPERTIES
        IMPORTED_CONFIGURATIONS "Debug;Release"
        IMPORTED_LOCATION_DEBUG
        "${_FMOD_MAC_STUDIO_LIB_DIR}/lib${_FMOD_STUDIO_LIB}.dylib"
        IMPORTED_LOCATION_RELEASE
        "${_FMOD_MAC_STUDIO_LIB_DIR}/lib${_FMOD_STUDIO_LIB}.dylib"
        MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
        MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")
    target_link_libraries(fmod_studio INTERFACE fmod_core)

    target_link_libraries(ext_third_party INTERFACE fmod_core fmod_studio)

    # No runtime staging here: on desktop that is the build-step scripts' job, and
    # copying the SDK into the extension folder is what put FMOD's redistributables
    # into git in the first place.
  endif()

# =============================================================================
# ANDROID (raw per-ABI .so)
# =============================================================================
elseif(ANDROID)
  set(_FMOD_AND_ROOT "${FMOD_SDK_ROOT}/FMOD Studio API Android")
  set(_FMOD_AND_CORE_LIB_DIR
      "${_FMOD_AND_ROOT}/api/core/lib/${CMAKE_ANDROID_ARCH_ABI}")
  set(_FMOD_AND_STUDIO_LIB_DIR
      "${_FMOD_AND_ROOT}/api/studio/lib/${CMAKE_ANDROID_ARCH_ABI}")

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_AND_ROOT}/api/core/inc"
                               "${_FMOD_AND_ROOT}/api/studio/inc")

  add_library(fmod_core SHARED IMPORTED GLOBAL)
  set_target_properties(
    fmod_core
    PROPERTIES
      IMPORTED_CONFIGURATIONS "Debug;Release"
      IMPORTED_LOCATION_DEBUG "${_FMOD_AND_CORE_LIB_DIR}/lib${_FMOD_CORE_LIB}.so"
      IMPORTED_LOCATION_RELEASE
      "${_FMOD_AND_CORE_LIB_DIR}/lib${_FMOD_CORE_LIB}.so"
      MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
      MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

  add_library(fmod_studio SHARED IMPORTED GLOBAL)
  set_target_properties(
    fmod_studio
    PROPERTIES
      IMPORTED_CONFIGURATIONS "Debug;Release"
      IMPORTED_LOCATION_DEBUG
      "${_FMOD_AND_STUDIO_LIB_DIR}/lib${_FMOD_STUDIO_LIB}.so"
      IMPORTED_LOCATION_RELEASE
      "${_FMOD_AND_STUDIO_LIB_DIR}/lib${_FMOD_STUDIO_LIB}.so"
      MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
      MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")
  target_link_libraries(fmod_studio INTERFACE fmod_core)

  target_link_libraries(ext_third_party INTERFACE fmod_core fmod_studio)

  # No runtime staging here either. The generated Android post-build copies
  # EXT_TP_RUNTIME_DLLS into AndroidSource/libs/<abi>/, which is the extension's
  # own source folder - gitignored, so it never reaches anyone who did not build
  # this extension themselves. The delivery that ships is pre_build_step's, and
  # it has to be pre_build_step because the asset compiler reads AndroidSource/
  # before post_build_step runs.
  # When it is restored there, it stages Studio's runtime only: GMFMOD stages
  # libfmod.so and fmod.jar, both extensions land in the same APK, and a second
  # copy of Core would collide at the same path.

# =============================================================================
# LINUX (versioned .so; only x86_64 ships the unversioned dev symlink)
# =============================================================================
elseif(UNIX)
  if(CMAKE_SYSTEM_PROCESSOR MATCHES "aarch64|arm64")
    set(_FMOD_LNX_ARCH "arm64")
  elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "^arm")
    set(_FMOD_LNX_ARCH "arm")
  elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "i[3-6]86")
    set(_FMOD_LNX_ARCH "x86")
  else()
    set(_FMOD_LNX_ARCH "x86_64")
  endif()

  set(_FMOD_LNX_ROOT "${FMOD_SDK_ROOT}/FMOD Studio API Linux")
  set(_FMOD_LNX_CORE_LIB_DIR "${_FMOD_LNX_ROOT}/api/core/lib/${_FMOD_LNX_ARCH}")
  set(_FMOD_LNX_STUDIO_LIB_DIR
      "${_FMOD_LNX_ROOT}/api/studio/lib/${_FMOD_LNX_ARCH}")

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_LNX_ROOT}/api/core/inc"
                               "${_FMOD_LNX_ROOT}/api/studio/inc")

  _fmod_resolve_so(_core_so "${_FMOD_LNX_CORE_LIB_DIR}" "${_FMOD_CORE_LIB}")
  _fmod_resolve_so(_studio_so "${_FMOD_LNX_STUDIO_LIB_DIR}"
                    "${_FMOD_STUDIO_LIB}")

  add_library(fmod_core SHARED IMPORTED GLOBAL)
  set_target_properties(
    fmod_core
    PROPERTIES
      IMPORTED_CONFIGURATIONS "Debug;Release"
      IMPORTED_LOCATION_DEBUG "${_core_so}"
      IMPORTED_LOCATION_RELEASE "${_core_so}"
      MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
      MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

  add_library(fmod_studio SHARED IMPORTED GLOBAL)
  set_target_properties(
    fmod_studio
    PROPERTIES
      IMPORTED_CONFIGURATIONS "Debug;Release"
      IMPORTED_LOCATION_DEBUG "${_studio_so}"
      IMPORTED_LOCATION_RELEASE "${_studio_so}"
      MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
      MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")
  target_link_libraries(fmod_studio INTERFACE fmod_core)

  target_link_libraries(ext_third_party INTERFACE fmod_core fmod_studio)

  # No runtime staging here: on desktop that is the build-step scripts' job, and
  # copying the SDK into the extension folder is what put FMOD's redistributables
  # into git in the first place.
endif()

# =============================================================================
# Bubble up runtime list to parent
# =============================================================================
set(EXT_TP_RUNTIME_DLLS
    "${_EXT_TP_RUNTIME_DLLS}"
    PARENT_SCOPE)
