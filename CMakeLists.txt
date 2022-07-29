cmake_minimum_required(VERSION 3.20)
project(Advanced_Programming_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Advanced_Programming_1
        DistanceCalculator.cpp
        DistanceCalculator.hpp
        Flower.cpp
        Flower.hpp
        KNN.cpp
        KNN.hpp
        ReadFlowers.hpp
        ReadFlowers.cpp
        )
