cmake_minimum_required(VERSION 3.16)
project(Fireworks)

set(CMAKE_CXX_STANDARD 14)
set( CMAKE_BUILD_TYPE Debug)

add_executable(Fireworks main.cpp Firework.cpp Firework.h)
