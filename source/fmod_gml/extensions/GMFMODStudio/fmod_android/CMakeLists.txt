# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project("YYFMOD" LANGUAGES CXX)

# Add library target with initial source file
add_library(YYFMOD SHARED "native-lib.cpp")

# Set the C++ standard for the project
set_property(TARGET YYFMOD PROPERTY CXX_STANDARD 17)

# Organize the include directories
target_include_directories(YYFMOD PUBLIC
    "./../../../../fmod_sdk/FMOD Studio API Android/api/core/inc"
    "./../../../../fmod_sdk/FMOD Studio API Android/api/studio/inc"
    "./../fmod_cpp"
)

# Organize the link directories and libraries
target_link_directories(YYFMOD PUBLIC
    "./../../../../fmod_sdk/FMOD Studio API Android/api/core/lib/${ANDROID_ABI}"
    "./../../../../fmod_sdk/FMOD Studio API Android/api/studio/lib/${ANDROID_ABI}"
)
target_link_libraries(YYFMOD PUBLIC
    fmodL
    fmodstudioL
)

# Add additional source files
target_sources(YYFMOD PRIVATE
    "./../fmod_cpp/ExtBufferIO.cpp"
    "./../fmod_cpp/Fmod_System.cpp"
    
    "./../fmod_cpp/Fmod_Channel.cpp" 
    "./../fmod_cpp/Fmod_ChannelControl.cpp"
    "./../fmod_cpp/Fmod_ChannelGroup.cpp" 
    "./../fmod_cpp/Fmod_Common.cpp" 
    "./../fmod_cpp/Fmod_DSP.cpp" 
    "./../fmod_cpp/Fmod_DSPConnection.cpp" 
    "./../fmod_cpp/Fmod_Geometry.cpp"
    "./../fmod_cpp/Fmod_Reverb3D.cpp"
    "./../fmod_cpp/Fmod_Sound.cpp"
    "./../fmod_cpp/Fmod_SoundGroup.cpp"
    
    "./../fmod_cpp/Fmod_Studio_Bank.cpp"
    "./../fmod_cpp/Fmod_Studio_Bus.cpp"
    "./../fmod_cpp/Fmod_Studio_CommandReplay.cpp"
    "./../fmod_cpp/Fmod_Studio_EventDescription.cpp"
    "./../fmod_cpp/Fmod_Studio_EventInstance.cpp"
    "./../fmod_cpp/Fmod_Studio_System.cpp"
    "./../fmod_cpp/Fmod_Studio_VCA.cpp"
    
    "./../fmod_cpp/Fmod_Tools.cpp"
)

# Find JNI package and include directories
find_package(JNI REQUIRED)
if (JNI_FOUND)
    message(STATUS "JNI includes directories: ${JNI_INCLUDE_DIRS}")
    target_include_directories(YYFMOD PRIVATE ${JNI_INCLUDE_DIRS})
endif()

# Define the base name of the .so file
set(TARGET_SO_BASENAME "libYYFMOD.so")

# Define the base path to where you want to copy the .so files
set(COPY_BASE_DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/../AndroidSource/libs")

# Custom command to copy the .so file after building, adjusted for configuration
add_custom_command(TARGET YYFMOD POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory "${COPY_BASE_DESTINATION}/${ANDROID_ABI}"
    COMMAND ${CMAKE_COMMAND} -E copy
            "$<TARGET_FILE:YYFMOD>" "${COPY_BASE_DESTINATION}/${ANDROID_ABI}/${TARGET_SO_BASENAME}")