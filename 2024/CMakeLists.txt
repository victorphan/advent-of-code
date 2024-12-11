cmake_minimum_required(VERSION 3.31)
project(aoc24)

find_package(Catch2)
add_executable(day1 day1/day1.cpp)
add_executable(day2 day2/day2.cpp)
add_executable(day3 day3/day3.cpp)
target_link_libraries(day3 PRIVATE Catch2::Catch2WithMain)
