# cmake_minimum_required(VERSION <specify CMake version here>)
project(GorskeLab)

set(CMAKE_CXX_STANDARD 14)

add_executable(GorskeLab main.cpp Figures.cpp Figures.h interface.cpp interface.h)