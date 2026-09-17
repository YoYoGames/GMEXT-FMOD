# PS5 (Prospero) pre-project setup
# CMAKE_C_COMPILER, CMAKE_CXX_COMPILER, and CMAKE_LINKER must be provided by
# the user via CMakeUserPresets.json (see templates/CMakeUserPresets.json.template).

if(EXTGEN_PLATFORM_PS5)
  if(NOT CMAKE_C_COMPILER OR NOT CMAKE_CXX_COMPILER OR NOT CMAKE_LINKER)
    message(FATAL_ERROR
      "PS5 (Prospero) build requires CMAKE_C_COMPILER, CMAKE_CXX_COMPILER, and CMAKE_LINKER.\n"
      "Create CMakeUserPresets.json from templates/CMakeUserPresets.json.template\n"
      "and configure paths for your PS5 SDK installation."
    )
  endif()

  # Prospero executables cannot run on Windows during CMake configure.
  # VS MSBuild handles compilation through the installed Prospero platform toolset.
  set(CMAKE_C_COMPILER_WORKS   TRUE CACHE BOOL "" FORCE)
  set(CMAKE_CXX_COMPILER_WORKS TRUE CACHE BOOL "" FORCE)

  # Clear Windows default link libraries injected by CMake's Windows platform
  # detection (kernel32, user32, gdi32, etc.) — these don't exist on Prospero.
  set(CMAKE_C_STANDARD_LIBRARIES   "" CACHE STRING "" FORCE)
  set(CMAKE_CXX_STANDARD_LIBRARIES "" CACHE STRING "" FORCE)

endif()
