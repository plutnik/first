cmake_minimum_required(VERSION 3.3)
project(first)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Werror -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual -Weffc++")

include_directories(tests/external)

set(EXE_SOURCE_FILES src/hello.cpp)
set(EXE_MAIN src/main.cpp)

add_executable(first ${EXE_MAIN} ${EXE_SOURCE_FILES})

set(TEST_SOURCE_FILES tests/external/catch.hpp)
set(TEST_MAIN tests/main.cpp)

add_executable(test_first ${TEST_MAIN} ${TEST_SOURCE_FILES} ${EXE_SOURCE_FILES})