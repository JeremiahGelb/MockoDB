# Impl
set(jinja_generated_class_source_files
  impl/JinjaGeneratedClassImpl.cpp
  impl/JinjaGeneratedClassFactory.cpp
)
add_library(jinja_generated_class ${jinja_generated_class_source_files})
target_include_directories(jinja_generated_class PUBLIC api)


# Mock
set(mock_jinja_generated_class_source_files
  mock/MockJinjaGeneratedClassFactory.cpp
)
add_library(jinja_generated_class_mock ${mock_jinja_generated_class_source_files})
target_link_libraries(jinja_generated_class_mock gmock)
target_include_directories(jinja_generated_class_mock PUBLIC api mock)

# Test
set(test_jinja_generated_class_source_files
  test/TestJinjaGeneratedClass.cpp
)
add_executable(jinja_generated_class_test ${run_all_tests} ${test_jinja_generated_class_source_files} ${jinja_generated_class_source_files})
target_include_directories(jinja_generated_class_test PUBLIC api)
target_link_libraries(jinja_generated_class_test gtest)
add_test(jinja_generated_class_test jinja_generated_class_test)
