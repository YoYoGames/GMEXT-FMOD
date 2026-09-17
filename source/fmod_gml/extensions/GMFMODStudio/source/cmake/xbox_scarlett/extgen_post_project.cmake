# Xbox Series (Scarlett/GDK) post-project hook: code_gen source discovery, includes, defines
# Detected via: CMAKE_GENERATOR_PLATFORM = "Gaming.Xbox.Scarlett.x64"
# NOTE: WIN32 is also TRUE for GDK builds - checked before WIN32 in CMakeLists.txt.

file(GLOB SRC_CORE CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/code_gen/core/*.cpp
)
file(GLOB SRC_COMMON CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/code_gen/*.cpp
)
file(GLOB_RECURSE SRC_NATIVE CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/code_gen/native/*.[cS]
  ${CMAKE_CURRENT_SOURCE_DIR}/code_gen/native/*.cpp
)

target_sources(${PROJECT_NAME} PRIVATE ${SRC_CORE} ${SRC_COMMON} ${SRC_NATIVE})
target_include_directories(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/code_gen
  ${CMAKE_CURRENT_SOURCE_DIR}/code_gen/core
)
target_compile_definitions(${PROJECT_NAME} PRIVATE OS_GDK OS_XBOX_SCARLETT EXTGEN_HAS_JNI=0)

# TODO: Add Xbox Series-specific GDK link libraries.
# GDK include/lib paths are auto-injected by Visual Studio for Gaming.Xbox.Scarlett.x64.

message(STATUS "Including Xbox Series (Scarlett) sources")
