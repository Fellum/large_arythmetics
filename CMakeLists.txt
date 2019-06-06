cmake_minimum_required(VERSION 3.14)
project(print_float C)

set(CMAKE_C_STANDARD 99)
aux_source_directory(. srcs)
add_executable(print_float ${srcs})