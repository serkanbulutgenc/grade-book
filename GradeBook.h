//
// Created by sbulutgenc on 28.11.2021.
//

#ifndef GRADE_BOOK_GRADEBOOK_H
#define GRADE_BOOK_GRADEBOOK_H

#include <string>

class GradeBook {
public:
    explicit GradeBook(std::string);
    void setCourseName(std::string);
    std::string getCourseName() const;
    void displayMessage() const;

private:
    std::string courseName;
};


#endif //GRADE_BOOK_GRADEBOOK_H
