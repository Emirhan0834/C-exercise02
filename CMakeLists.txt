cmake_minimum_required(VERSION 3.29)
project(untitled5 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled5 main.c)

set(DMALLOC_LIB "C:/Users/birhe/Downloads/dmalloc-5.6.5/libdmalloc.a")
include_directories("C:/Users/birhe/Downloads/dmalloc-5.6.5/include")

target_link_libraries(untitled5 ${DMALLOC_LIB})
