include_directories(${GTEST_SOURCE_DIR}/include ${GTEST_SOURCE_DIR})

file(GLOB TEST_SOURCES ${PROJECT_SOURCE_DIR}/test/c++/*.cpp)
add_executable(runTests ${TEST_SOURCES})

target_link_libraries(runTests gtest gtest_main)
target_link_libraries(runTests core)