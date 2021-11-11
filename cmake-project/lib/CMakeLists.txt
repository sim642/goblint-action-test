add_library(lib lib.c)

target_include_directories(lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
