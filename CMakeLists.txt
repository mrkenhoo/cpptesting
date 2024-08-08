cmake_minimum_required(VERSION 3.30)

project(cpptesting VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_C_STANDARD 26)
set(CMAKE_C_STANDARD_REQUIRED true)

add_executable(cpptesting
                src/main.cpp
                src/Application.cpp
                src/Updater.cpp)
