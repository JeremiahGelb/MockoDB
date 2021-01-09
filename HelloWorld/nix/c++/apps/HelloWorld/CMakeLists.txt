set(hello_world_source_files HelloWorld.cpp)
add_executable(hello_world ${hello_world_source_files})

target_link_libraries(hello_world helloer)
target_link_libraries(hello_world talker)