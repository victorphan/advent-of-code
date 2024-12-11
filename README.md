# Advent of Code
My solutions for Advent of Code.

CMake configuring and building in `/build` directory:
```
conan install . --build=missing
cmake --preset conan-[debug/release]
cmake --build ./build/[Debug/Release]/
```
