#include <iostream>
#include <string>
#include "GradeBook.h"

int main() {

    GradeBook myGradeBook("CS101 C++ Programming");
    myGradeBook.displayMessage();

    myGradeBook.inputGrades();

    myGradeBook.displayGradeReport();
    
    return 0;
}
