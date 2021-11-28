//
// Created by sbulutgenc on 28.11.2021.
//

#include <iostream>
#include "GradeBook.h"

GradeBook::GradeBook(std::string name) {
    setCourseName(name);
}

void GradeBook::setCourseName(std::string name) {
    if(name.size() <= 25){
        courseName = name;
    }
    if (name.size() > 25){
        courseName = name.substr(0, 25);

        std::cerr << "Name \""<< name
        << "\" exceeds maximum length (25).\n"
           "Limiting coursename to first 25 character\n" << std::endl;
    }
}

std::string GradeBook::getCourseName() const {
    return courseName;
}

void GradeBook::displayMessage() const {
    std::cout << "Welcome to the gradebook for\n" << getCourseName() << " !" << std::endl;
}
