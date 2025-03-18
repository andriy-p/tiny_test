cmake_minimum_required(VERSION 3.10)

project(TinyTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_path(TINYXML2_INCLUDE_DIR tinyxml2.h PATHS $ENV{CONDA_PREFIX}/include)
find_library(TINYXML2_LIBRARY tinyxml2 PATHS $ENV{CONDA_PREFIX}/lib)

add_executable(tiny_test main.cpp)

target_include_directories(tiny_test PRIVATE ${TINYXML2_INCLUDE_DIR})
target_link_libraries(tiny_test PRIVATE ${TINYXML2_LIBRARY})
