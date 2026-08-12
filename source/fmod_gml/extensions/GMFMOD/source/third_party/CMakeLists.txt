cmake_minimum_required(VERSION 3.18)

# =============================================================================
# third_party: wires the vendored FMOD Core SDK into a single INTERFACE target
# (ext_third_party) for every supported platform.
#
# This extension is FMOD Core only (no FMOD Studio). The only variant axis
# FMOD's own binaries expose is logging (L) vs non-logging - it does not ship
# separate Debug/Release builds. By default this maps Debug configs to the
# logging library and Release-like configs to the non-logging one;
# EXT_TP_FMOD_USE_LOGGING forces logging in every config.
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

# MUST match GMFMODStudio's setting. Both extensions load into the same process,
# so if one links fmodL.dll and the other fmod.dll the process ends up with two
# separate copies of FMOD Core - an FMOD::System created by one is meaningless to
# the other, which breaks fmod_studio_system_get_core_system_ptr() -> fmod_system_adopt().
# Defaulted ON here (not in CMakePresets.json) because extgen regenerates presets.
option(EXT_TP_FMOD_USE_LOGGING
       "Force the FMOD logging (L) libraries in every config" ON)

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

# Helper: given a library root name (e.g. "fmod"), resolve the Debug and
# Release basenames according to EXT_TP_FMOD_USE_LOGGING.
function(_fmod_pick_variant outDebugVar outReleaseVar rootName)
  set(${outDebugVar}
      "${rootName}L"
      PARENT_SCOPE)
  if(EXT_TP_FMOD_USE_LOGGING)
    set(${outReleaseVar}
        "${rootName}L"
        PARENT_SCOPE)
  else()
    set(${outReleaseVar}
        "${rootName}"
        PARENT_SCOPE)
  endif()
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

# =============================================================================
# WINDOWS (MSVC/ClangCL) - x64 only
# =============================================================================
if(WIN32)
  set(_FMOD_WIN_ROOT "${FMOD_SDK_ROOT}/FMOD Studio API Windows")
  set(_FMOD_WIN_CORE_LIB_DIR "${_FMOD_WIN_ROOT}/api/core/lib/x64")

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_WIN_ROOT}/api/core/inc")

  _fmod_pick_variant(_core_dbg _core_rel fmod)

  add_library(fmod_core SHARED IMPORTED GLOBAL)
  set_target_properties(
    fmod_core
    PROPERTIES
      IMPORTED_CONFIGURATIONS "Debug;Release"
      IMPORTED_IMPLIB_DEBUG "${_FMOD_WIN_CORE_LIB_DIR}/${_core_dbg}_vc.lib"
      IMPORTED_IMPLIB_RELEASE "${_FMOD_WIN_CORE_LIB_DIR}/${_core_rel}_vc.lib"
      IMPORTED_LOCATION_DEBUG "${_FMOD_WIN_CORE_LIB_DIR}/${_core_dbg}.dll"
      IMPORTED_LOCATION_RELEASE "${_FMOD_WIN_CORE_LIB_DIR}/${_core_rel}.dll"
      MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
      MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

  target_link_libraries(ext_third_party INTERFACE fmod_core)

  _ext_tp_append_runtime(
    $<$<CONFIG:Debug>:${_FMOD_WIN_CORE_LIB_DIR}/${_core_dbg}.dll>
    $<$<OR:$<CONFIG:Release>,$<CONFIG:RelWithDebInfo>,$<CONFIG:MinSizeRel>>:${_FMOD_WIN_CORE_LIB_DIR}/${_core_rel}.dll>
  )

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
      ext_third_party INTERFACE "${_FMOD_IOS_ROOT}/api/core/inc")

    _fmod_pick_variant(_core_dbg _core_rel fmod)

    add_library(fmod_core STATIC IMPORTED GLOBAL)
    set_target_properties(
      fmod_core
      PROPERTIES
        IMPORTED_CONFIGURATIONS "Debug;Release"
        IMPORTED_LOCATION_DEBUG
        "${_FMOD_IOS_CORE_LIB_DIR}/lib${_core_dbg}_${_FMOD_APPLE_SLICE}.a"
        IMPORTED_LOCATION_RELEASE
        "${_FMOD_IOS_CORE_LIB_DIR}/lib${_core_rel}_${_FMOD_APPLE_SLICE}.a"
        MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
        MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

    target_link_libraries(ext_third_party INTERFACE fmod_core)

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

    target_include_directories(
      ext_third_party INTERFACE "${_FMOD_MAC_ROOT}/api/core/inc")

    _fmod_pick_variant(_core_dbg _core_rel fmod)

    add_library(fmod_core SHARED IMPORTED GLOBAL)
    set_target_properties(
      fmod_core
      PROPERTIES
        IMPORTED_CONFIGURATIONS "Debug;Release"
        IMPORTED_LOCATION_DEBUG
        "${_FMOD_MAC_CORE_LIB_DIR}/lib${_core_dbg}.dylib"
        IMPORTED_LOCATION_RELEASE
        "${_FMOD_MAC_CORE_LIB_DIR}/lib${_core_rel}.dylib"
        MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
        MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

    target_link_libraries(ext_third_party INTERFACE fmod_core)

    _ext_tp_append_runtime(
      $<$<CONFIG:Debug>:${_FMOD_MAC_CORE_LIB_DIR}/lib${_core_dbg}.dylib>
      $<$<OR:$<CONFIG:Release>,$<CONFIG:RelWithDebInfo>,$<CONFIG:MinSizeRel>>:${_FMOD_MAC_CORE_LIB_DIR}/lib${_core_rel}.dylib>
    )
  endif()

# =============================================================================
# ANDROID (raw per-ABI .so)
# =============================================================================
elseif(ANDROID)
  set(_FMOD_AND_ROOT "${FMOD_SDK_ROOT}/FMOD Studio API Android")
  set(_FMOD_AND_CORE_LIB_DIR
      "${_FMOD_AND_ROOT}/api/core/lib/${CMAKE_ANDROID_ARCH_ABI}")

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_AND_ROOT}/api/core/inc")

  _fmod_pick_variant(_core_dbg _core_rel fmod)

  add_library(fmod_core SHARED IMPORTED GLOBAL)
  set_target_properties(
    fmod_core
    PROPERTIES
      IMPORTED_CONFIGURATIONS "Debug;Release"
      IMPORTED_LOCATION_DEBUG "${_FMOD_AND_CORE_LIB_DIR}/lib${_core_dbg}.so"
      IMPORTED_LOCATION_RELEASE
      "${_FMOD_AND_CORE_LIB_DIR}/lib${_core_rel}.so"
      MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
      MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

  target_link_libraries(ext_third_party INTERFACE fmod_core)

  _ext_tp_append_runtime(
    $<$<CONFIG:Debug>:${_FMOD_AND_CORE_LIB_DIR}/lib${_core_dbg}.so>
    $<$<OR:$<CONFIG:Release>,$<CONFIG:RelWithDebInfo>,$<CONFIG:MinSizeRel>>:${_FMOD_AND_CORE_LIB_DIR}/lib${_core_rel}.so>
  )

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

  target_include_directories(
    ext_third_party INTERFACE "${_FMOD_LNX_ROOT}/api/core/inc")

  _fmod_pick_variant(_core_dbg _core_rel fmod)

  _fmod_resolve_so(_core_dbg_so "${_FMOD_LNX_CORE_LIB_DIR}" "${_core_dbg}")
  _fmod_resolve_so(_core_rel_so "${_FMOD_LNX_CORE_LIB_DIR}" "${_core_rel}")

  add_library(fmod_core SHARED IMPORTED GLOBAL)
  set_target_properties(
    fmod_core
    PROPERTIES
      IMPORTED_CONFIGURATIONS "Debug;Release"
      IMPORTED_LOCATION_DEBUG "${_core_dbg_so}"
      IMPORTED_LOCATION_RELEASE "${_core_rel_so}"
      MAP_IMPORTED_CONFIG_RELWITHDEBINFO "${_MAP_REL_CONFIGS}"
      MAP_IMPORTED_CONFIG_MINSIZEREL "${_MAP_REL_CONFIGS}")

  target_link_libraries(ext_third_party INTERFACE fmod_core)

  _ext_tp_append_runtime(
    $<$<CONFIG:Debug>:${_core_dbg_so}>
    $<$<OR:$<CONFIG:Release>,$<CONFIG:RelWithDebInfo>,$<CONFIG:MinSizeRel>>:${_core_rel_so}>
  )
endif()

# =============================================================================
# (OPTIONAL) Console SDK hooks (uncomment and point to vendor toolchains)
# =============================================================================
# if(CMAKE_SYSTEM_NAME STREQUAL "ORBIS") # PS4: add imported lib and link;
# publish runtime if needed elseif(CMAKE_SYSTEM_NAME STREQUAL "Prospero") # PS5:
# similar elseif(CMAKE_SYSTEM_NAME STREQUAL "NintendoSwitch" OR DEFINED
# ENV{NINTENDO_SDK_ROOT}) # Switch: similar endif()

# =============================================================================
# Bubble up runtime list to parent
# =============================================================================
set(EXT_TP_RUNTIME_DLLS
    "${_EXT_TP_RUNTIME_DLLS}"
    PARENT_SCOPE)
