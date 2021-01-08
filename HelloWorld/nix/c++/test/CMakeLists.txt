set(run_tests_source_files RunAllTests.cpp)

set(test_list
  test_test.cpp
)

add_executable(run_tests ${run_tests_source_files} ${test_list})
target_link_libraries(run_tests gtest)