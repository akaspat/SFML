cmake_minimum_required(VERSION 3.17)
project(SFML)

set(CMAKE_CXX_STANDARD 14)

# SFML lib config
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(SFML main.cpp)

# SFML lib config
target_link_libraries(SFML sfml-graphics sfml-audio)