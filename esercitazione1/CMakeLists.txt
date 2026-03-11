
cmake_minimum_required(VERSION 3.20)

project(passo1) 
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wshadow")

set(SOURCES_PROG1 lett.cpp)
add_executable(lettura_file ${SOURCES_PROG1})

set(SOURCES_PROG2 media.cpp)
add_executable(media ${SOURCES_PROG2})



