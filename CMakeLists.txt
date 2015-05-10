cmake_minimum_required (VERSION 2.6)
project (string_literal)

include (version.cmake)

file(GLOB_RECURSE string_literal_test_SOURCES "test/*.cpp")

add_executable(string_literal_test ${string_literal_test_SOURCES})

include_directories("include")
