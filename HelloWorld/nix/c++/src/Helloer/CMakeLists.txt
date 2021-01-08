set(helloer_source_files
  impl/HelloerImpl.cpp
  impl/HelloerImplFactory.cpp
)

set(mock_helloer_source_files
  mock/MockHelloer.cpp
)

add_library(helloer ${helloer_source_files})
target_include_directories(helloer PUBLIC api)

add_library(helloer_mock ${mock_helloer_source_files})
target_include_directories(helloer_mock PUBLIC api)

set(test_helloer_source_files
  test/TestHelloer.cpp
)
add_executable(helloer_test ${run_all_tests} ${test_helloer_source_files})
target_link_libraries(helloer_test helloer gtest)
add_test(helloer_test helloer_test)
