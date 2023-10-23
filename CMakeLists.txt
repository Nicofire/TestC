cmake_minimum_required(VERSION 3.26)
project(TestC)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/objects)
include_directories(src/view)

add_executable(TestC
        src/objects/Element.cpp
        src/objects/Element.h
        src/objects/Page.cpp
        src/objects/Page.h
        src/view/Screen.cpp
        src/view/Screen.h
        "src/Hello World/helloworld.c"
        "src/Hello World/secend.cpp")
