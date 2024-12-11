cmake_minimum_required(VERSION 3.31)
project(aoc24)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(-Wall -Wextra -Werror)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_link_options(-stdlib=libstdc++)
    add_compile_options(-Wall -Wextra -Werror)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options(/W4 /WX /EHsc)
endif()

add_subdirectory(2024)
