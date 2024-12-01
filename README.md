# Advent of Code 2024
My solutions and devlog in C++ for Advent of Code 2024.

CMake configuring and building in `/build` directory:
`cmake -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_COMPILER="cl.exe" ..`
`cmake --build . -j6`


## Day 1
### Part 1
I first had to get a workflow for using Neovim/clangd + CMake + Ninja + MSVC working.
I tried to use std::ranges, left fold and lambdas to do this solution in as much modern C++ as I can think of.
Running looks like so:
```
.\day1.exe ..\input\day1.txt
Sum of total differences: 1646452
```
