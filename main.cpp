#include <iostream>
#include <string>
#include "GradeBook.h"

int main() {

    GradeBook myGradeBook("CS101 C++ Programming");
    myGradeBook.displayMessage();

    myGradeBook.determineClassAvarage();


   /*
    std::cout << "gradeBook1 initial course name is : "
    << gradeBook1.getCourseName()
    << "\ngradeBook2 initial coursename is : "
    << gradeBook2.getCourseName() << std::endl;

    gradeBook1.setCourseName("CS101 C++ Programming");

    std::cout << "gradeBook1 course name is : "
              << gradeBook1.getCourseName()
              << "\ngradeBook2 coursename is : "
              << gradeBook2.getCourseName() << std::endl;
  */
    return 0;
}
