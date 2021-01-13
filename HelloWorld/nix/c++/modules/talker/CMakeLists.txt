# Impl
set(talker_source_files
  impl/TalkerImpl.cpp
  impl/TalkerImplFactory.cpp
)

add_library(talker ${talker_source_files})
target_include_directories(talker PUBLIC api)
target_link_libraries(talker helloer)


# Test
set(test_talker_source_files
  test/TestTalker.cpp
)
add_executable(talker_test ${run_all_tests} ${test_talker_source_files} ${talker_source_files})
target_include_directories(talker_test PUBLIC api)
target_link_libraries(talker_test 
  gtest
  helloer_mock
  pthread
)
add_test(talker_test talker_test)
