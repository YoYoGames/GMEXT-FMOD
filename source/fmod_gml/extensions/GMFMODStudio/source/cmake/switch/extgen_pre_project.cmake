# Nintendo Switch pre-project initialization
# This file is included before the project() call when building for Switch
#
# IMPORTANT: This file does NOT contain Nintendo SDK paths or structure.
# Users must provide their own Directory.Build.props file that imports
# the Nintendo SDK configuration.

if(EXTGEN_PLATFORM_SWITCH)
  # Validate required Nintendo Switch configuration
  if(NOT NINTENDO_SDK_PROPS_PATH)
    message(FATAL_ERROR
      "Nintendo Switch build requires NINTENDO_SDK_PROPS_PATH to be set.\n"
      "Create CMakeUserPresets.json from CMakeUserPresets.json.template\n"
      "and configure paths for your Nintendo SDK installation."
    )
  endif()

  if(NOT CMAKE_C_COMPILER OR NOT CMAKE_CXX_COMPILER)
    message(FATAL_ERROR
      "Nintendo Switch build requires CMAKE_C_COMPILER and CMAKE_CXX_COMPILER.\n"
      "Create CMakeUserPresets.json from CMakeUserPresets.json.template\n"
      "and set compiler paths for your Nintendo SDK installation."
    )
  endif()

  # Check for user-provided Directory.Build.props template
  if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/cmake/switch/Directory.Build.props.in")
    # Configure props template with CMake variables (replaces @VARIABLE@)
    configure_file(
      "${CMAKE_CURRENT_SOURCE_DIR}/cmake/switch/Directory.Build.props.in"
      "${CMAKE_BINARY_DIR}/Directory.Build.props"
      @ONLY
    )
    message(STATUS "Nintendo Switch: Using Directory.Build.props")
    message(STATUS "Nintendo Switch: Props path = ${NINTENDO_SDK_PROPS_PATH}")
  else()
    message(FATAL_ERROR
      "Nintendo Switch build requires cmake/Directory.Build.props.in\n"
      "This file should be present in the repository."
    )
  endif()

  # Skip CMake's compiler detection for Nintendo Switch
  # Visual Studio will use the compiler specified in the imported Nintendo SDK props
  set(CMAKE_C_COMPILER_WORKS TRUE CACHE BOOL "" FORCE)
  set(CMAKE_CXX_COMPILER_WORKS TRUE CACHE BOOL "" FORCE)

  # Suppress Clang warning about GNU extension (##__VA_ARGS__)
  # Nintendo Switch uses clang-cl which supports this extension
  # Use -Xclang to pass flag directly to Clang compiler frontend
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Xclang -Wno-gnu-zero-variadic-macro-arguments" CACHE STRING "" FORCE)
endif()
