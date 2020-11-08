cmake_minimum_required(VERSION 3.17)
project(SFML)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_EXE main.cpp)

set(SOURCE_LIB
        src/Shape.cpp
        src/Ellipse.cpp
        src/Rectangle.cpp)

add_library(figure STATIC ${SOURCE_LIB})

# SFML lib config
find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

add_executable(SFML ${SOURCE_EXE})

# SFML lib config
target_link_libraries(SFML
        sfml-graphics
        figure)