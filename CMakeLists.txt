cmake_minimum_required(VERSION 3.20)
project(grade_book)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME} main.cpp GradeBook.cpp GradeBook.h)
