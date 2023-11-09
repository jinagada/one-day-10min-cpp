cmake_minimum_required(VERSION 3.26)
project(one_day_10min_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/out")

add_executable(section-00 section-00/main.cpp)
add_executable(section-01 section-01/main.cpp)
add_executable(section-02 section-02/main.cpp)
add_executable(section-03 section-03/main.cpp)
add_executable(section-04 section-04/main.cpp)
add_executable(section-05 section-05/main.cpp)
add_executable(section-06 section-06/main.cpp)
add_executable(section-07 section-07/main.cpp
        section-07/struct.h
        section-07/func.cpp
        section-07/new.h
        section-07/stock.h
        section-07/func2.cpp)
add_executable(section-08 section-08/main.cpp
        section-08/time.h
        section-08/func.cpp)
add_executable(section-09 section-09/main.cpp
        section-08/time.h
        section-08/func.cpp)
