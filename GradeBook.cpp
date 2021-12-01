//
// Created by sbulutgenc on 28.11.2021.
//

#include <iostream>
#include <iomanip>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name)
{
    setCourseName(name);
}

void GradeBook::setCourseName(std::string name) {
    if(name.size() <= 25){
        courseName = name;
    }
    else {
        courseName = name.substr(0, 25);

        std::cerr << "Name \""<< name
        << "\" exceeds maximum length (25).\n"
           "Limiting coursename to first 25 character\n" << std::endl;
    }
}

std::string GradeBook::getCourseName() const {
    return courseName;
}

int GradeBook::maximum(int x, int y, int z) const{
  int maximumNumber = x;

  if(y > maximumNumber) maximumNumber = y;

  if(z > maximumNumber) maximumNumber = z;

  return maximumNumber;
}

void GradeBook::inputGrades(){
  int grade1;
  int grade2;
  int grade3;

  std::cout << "Enter three grade : ";
  std::cin >> grade1 >> grade2 >> grade3;

  maximumGrade = maximum(grade1, grade2, grade3);

}//End of inputGrades

void GradeBook::displayGradeReport()const{
  std::cout << "Maximum of grades entered: " << maximumGrade <<std::endl;
}

void GradeBook::displayMessage() const {
    std::cout << "Welcome to the gradebook for\n" << getCourseName() << " !" << std::endl;
}
