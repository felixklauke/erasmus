cmake_minimum_required(VERSION 3.9)
project(erasmus)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(erasmus main.cpp src/DataStorage.cpp include/DataStorage.h src/DataManager.cpp include/DataManager.h src/DataBlock.cpp include/DataBlock.h src/Database.cpp include/Database.h src/IndexController.cpp include/IndexController.h src/DataController.cpp include/DataController.h src/Controller.cpp include/Controller.h src/IndexBlock.cpp include/IndexBlock.h src/DataRecord.cpp include/DataRecord.h)