cmake_minimum_required(VERSION 3.9)
project(erasmus)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(erasmus main.cpp src/DataStorage.cpp include/DataStorage.h)