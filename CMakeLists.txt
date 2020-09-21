cmake_minimum_required(VERSION 3.5)

project(18_boost_1)

find_package(Boost COMPONENTS program_options  REQUIRED)

include_directories(${Boost_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(boostHomeWork boostHomeWork.cpp)

target_link_libraries(boostHomeWork
        ${Boost_LIBRARIES}
        )