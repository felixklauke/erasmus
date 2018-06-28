cmake_minimum_required(VERSION 3.9)
project(Erasmus)

# Set CMake standard version
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(run ${SOURCE_FILES})

# Include Directories
include_directories(core)

# Load sub directories
add_subdirectory(core)
add_subdirectory(test)

target_link_libraries(run core)