cmake_minimum_required(VERSION 3.9)
project(erasmus)

# Set CMake standard version
set(CMAKE_CXX_STANDARD 17)

# Include Directories
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/include/*.h ${PROJECT_SOURCE_DIR}/src/*.cpp main.cpp)
set(SOURCE_FILES ${SOURCES} include/FileSystemAccessor.h src/FileSystemAccessor.cpp include/FileSystemAccessor.h src/IndexStorage.cpp include/IndexStorage.h include/DataStorage.cpp include/DataStorage.h)
add_executable(main.cpp ${SOURCE_FILES})