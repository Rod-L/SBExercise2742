cmake_minimum_required(VERSION 3.22)
project(SBExercise2742)

set(CMAKE_CXX_STANDARD 14)

add_executable(SBExercise2742
        src/main.cpp
        src/BaseShape.cpp
        include/BaseShape.h
        include/ShapeColor.h
        src/Circle.cpp
        include/Circle.h
        src/Square.cpp
        include/Square.h
        src/Rectangle.cpp
        include/Rectangle.h
        src/EqualTriangle.cpp
        include/EqualTriangle.h
        include/Shapes.h
        src/ShapeColor.cpp)

target_include_directories(SBExercise2742 PUBLIC include)
