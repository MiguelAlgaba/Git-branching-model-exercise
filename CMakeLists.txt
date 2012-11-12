project(Git-branching-model)

cmake_minimum_required(VERSION 2.8)

include( CTest )

add_executable(Git-branching-model main.cpp)
add_test(NAME Git-branching-model-test COMMAND Git-branching-model)

#add_executable(Compiler-error compiler_error.cpp)


