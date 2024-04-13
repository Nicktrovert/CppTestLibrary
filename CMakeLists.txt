cmake_minimum_required(VERSION 3.26)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled2Exe main.cpp)

add_library(library library.cpp)
target_link_libraries(untitled2Exe PUBLIC library)