#include <iostream>
#include <string>
#include "GradeBook.h"

int main() {

    GradeBook gradeBook1("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2("CS102 C++ Data Structures");

    std::cout << "gradeBook1 initial course name is : "
    << gradeBook1.getCourseName()
    << "\ngradeBook2 initial coursename is : "
    << gradeBook2.getCourseName() << std::endl;

    gradeBook1.setCourseName("CS101 C++ Programming");

    std::cout << "gradeBook1 course name is : "
              << gradeBook1.getCourseName()
              << "\ngradeBook2 coursename is : "
              << gradeBook2.getCourseName() << std::endl;

    return 0;
}
