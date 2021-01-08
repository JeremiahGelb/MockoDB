cmake_minimum_required(VERSION 3.19.1)
SET(CMAKE_CXX_STANDARD 20)

enable_testing()
set(run_all_tests ${CMAKE_SOURCE_DIR}/test/RunAllTests.cpp)

project (hello)

add_subdirectory(src)
add_subdirectory(apps)
add_subdirectory(test)
