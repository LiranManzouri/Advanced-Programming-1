cmake_minimum_required(VERSION 3.20)
project(Advanced_Programming_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Advanced_Programming_1
        DistanceCalculator.cpp
        DistanceCalculator.h
        Flower.cpp
        Flower.h
        KNN.cpp
        KNN.h
        ReadFlowers.cpp
        ReadFlowers.h
        ClassifyFlower.cpp
        ClassifyFlower.h
        )
