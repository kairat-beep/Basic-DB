cmake_minimum_required(VERSION 3.8)
project(BasicDB
        HOMEPAGE_URL https://github.com/kairat-beep/Basic-DB
	LANGUAGES CXX)
file(GLOB_RECURSE sources    src/main.cpp)
file(GLOB_RECURSE sources_test src/test/*.cpp)
add_compile_options(-std=c++11)
add_executable(BasicDB ${sources} ${data})
set(CMAKE_CONFIGURATION_TYPES "Debug" CACHE STRING "" FORCE)
