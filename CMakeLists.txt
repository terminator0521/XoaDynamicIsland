# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

# Project
project ("XoaDynamicIsland")

# 1. Include the FetchContent module
include(FetchContent)

# 2. Define the raylib download configuration
FetchContent_Declare(
  raylib
  GIT_REPOSITORY https://github.com/raysan5/raylib.git
  GIT_TAG        master 
)

# 3. Optimize raylib's build settings (disables building raylib's own examples/tests)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_TESTS OFF CACHE BOOL "" FORCE)

# 4. Download and make raylib targets available
FetchContent_MakeAvailable(raylib)

# Include sub-projects.
add_subdirectory("Xoa")
add_subdirectory("XoaApp")

# Ensure Visual Studio marks 'Xoa' executable as the default startup app
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} 
             PROPERTY VS_STARTUP_PROJECT Xoa)

set_target_properties(Xoa XoaApp
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
