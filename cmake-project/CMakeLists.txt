cmake_minimum_required(VERSION 3.10)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(cmake-project)

add_subdirectory(lib)

add_executable(main main.c)
target_link_libraries(main PUBLIC lib)
