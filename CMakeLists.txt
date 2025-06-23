cmake_minimum_required(VERSION 3.10)
project(triangle_printer)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_COMPILE_COMMANDS ON)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src src_list)

add_executable(triangle_printer ${src_list})
