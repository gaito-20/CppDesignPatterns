cmake_minimum_required(VERSION 3.29)
project(CppDesignPatterns)

set(CMAKE_CXX_STANDARD 17)

set(HEADER_FILES
        src/Observer/Observer.h
)

set(SOURCE_FILES
        src/Observer/Observer.cpp
)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})

add_subdirectory(test)