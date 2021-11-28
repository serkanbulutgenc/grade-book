//
// Created by sbulutgenc on 28.11.2021.
//

#include <iostream>
#include <iomanip>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name) {
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

/* // Class Avarage 1
  void GradeBook::determineClassAvarage() const {
    int total = 0;
    unsigned int gradeCounter = 1;

    while( gradeCounter <= 10){
      std::cout << "Enter student grade : ";
      int grade = 0;
      std::cin >> grade;

      total = total + grade;
      gradeCounter = gradeCounter +1;
    }

    int avarage = total/10;

    std::cout << "The total 10 grade is : " << total 
    << "\n" 
    << "Class avarage is : " <<  avarage << std::endl;

  }
*/

void GradeBook::determineClassAvarage() const {
  int total = 0;
  unsigned int gradeCounter = 0;

  std::cout << "Enter grade or -1 to quit : ";
  int grade = 0;
  std::cin >> grade;

  while( grade != -1){

    total = total + grade;
    gradeCounter = gradeCounter+1;

    std::cout << "Enter grade or -1 to quit : ";
    std::cin >> grade;
  }

  if(gradeCounter !=0){
    double avarage = static_cast<double>(total/gradeCounter);

    std::cout << "Total of all : " << gradeCounter << " grades entered "  << total << std::endl;
  std::cout << std::setprecision(2) <<std::fixed <<"Class avarage is : " <<  avarage << std::endl;
  }else{
    std::cout << "No grade was entered\n";
  }
  

}


void GradeBook::displayMessage() const {
    std::cout << "Welcome to the gradebook for\n" << getCourseName() << " !" << std::endl;
}
