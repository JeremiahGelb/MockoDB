set(helloer_source_files
  impl/Helloer.cpp
)

set(mock_helloer_source_files
  mock/MockHelloer.cpp
)

add_library(helloer ${helloer_source_files})
target_include_directories(helloer PUBLIC api)

add_library(helloer_mock ${mock_helloer_source_files})
target_include_directories(helloer_mock PUBLIC api)

