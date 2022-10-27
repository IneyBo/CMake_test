cmake_minimum_required(VERSION 3.22.0)

project(race)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(race_library SHARED leaver.h leaver.cpp)
add_executable(race main.cpp)
target_link_libraries(race race_library)