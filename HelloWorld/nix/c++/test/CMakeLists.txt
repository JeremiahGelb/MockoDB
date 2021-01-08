add_executable(base_tests ${run_all_tests} test_test.cpp)
target_link_libraries(base_tests gtest)
add_test(base_tests base_tests)