cmake_minimum_required(VERSION 3.16)
project(SweepBomb)

set(CMAKE_CXX_STANDARD 11)

add_executable(SweepBomb main.cpp cmake-build-debug/Game.cpp cmake-build-debug/Game.h)