//
// Created by sbulutgenc on 28.11.2021.
//

#include <iostream>
#include <iomanip>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name):
aCount(0),bCount(0),cCount(0),dCount(0),eCount(0)
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

void GradeBook::inputGrades(){
  int grade;
  std::cout << "Enter the letter grades."<< std::endl
  << "Enter the EOF character to end input"<< std::endl;

  while((grade = std::cin.get()) != EOF ){
    switch(grade){
      case 'a':case 'A':
        ++aCount;
        break;
      case 'b': case 'B':
      ++bCount;
      break;
      case 'c': case 'C':
      ++cCount;
      break;
      case 'd': case 'D':
      ++dCount;
      break;
      case '\n': case '\t': case ' ':
      break;
      case 'e': case 'E':
      ++eCount;
      break;
      default:
      std::cout << "Incorrect letter grade entered."
      << "Enter a new grade "<< std::endl;
      break;
    }//End of switch case
  }//End of while 

}//End of inputGrades

void GradeBook::displayGradeReport()const{
  std::cout << "\n\nNumber of students who received each letter grade :"
  << "\nA:" << aCount 
  << "\nB:" << bCount
  << "\nC:" << cCount
  << "\nD:" << dCount
  << "\nE:" << eCount
  << std::endl;
}

void GradeBook::displayMessage() const {
    std::cout << "Welcome to the gradebook for\n" << getCourseName() << " !" << std::endl;
}
