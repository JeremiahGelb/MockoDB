cmake_minimum_required(VERSION 3.19.1)
SET(CMAKE_CXX_STANDARD 20)

project (hello)

set(MEMORYCHECK_COMMAND_OPTIONS "--error-exitcode=1 --leak-check=full")
include(CTest)
set(run_all_tests ${CMAKE_SOURCE_DIR}/test/RunAllTests.cpp)

add_subdirectory(modules)
add_subdirectory(apps)
add_subdirectory(test)
