cmake_minimum_required(VERSION 3.24)
project(ascii_mirror)

set(CMAKE_CXX_STANDARD 20)

add_executable(ascii_mirror main.cpp reverse.cpp reverse.hpp)
