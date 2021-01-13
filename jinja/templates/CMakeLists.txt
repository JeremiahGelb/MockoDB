# Impl
set({{snake_case}}_source_files
  impl/{{camel_case}}Impl.cpp
  impl/{{camel_case}}Factory.cpp
)
add_library({{snake_case}} ${{"{"}}{{snake_case}}_source_files{{"}"}})
target_include_directories({{snake_case}} PUBLIC api)


# Mock
set(mock_{{snake_case}}_source_files
  mock/Mock{{camel_case}}Factory.cpp
)
add_library({{snake_case}}_mock ${{"{"}}mock_{{snake_case}}_source_files{{"}"}})
target_link_libraries({{snake_case}}_mock gmock)
target_include_directories({{snake_case}}_mock PUBLIC api mock)

# Test
set(test_{{snake_case}}_source_files
  test/Test{{camel_case}}.cpp
)
add_executable({{snake_case}}_test ${{"{"}}run_all_tests{{"}"}} ${{"{"}}test_{{snake_case}}_source_files{{"}"}} ${{"{"}}{{snake_case}}_source_files{{"}"}})
target_include_directories({{snake_case}}_test PUBLIC api)
target_link_libraries({{snake_case}}_test gtest)
add_test({{snake_case}}_test {{snake_case}}_test)
