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
    void determineClassAvarage() const;
    void displayMessage() const;
    void inputGrades();
    void displayGradeReport() const;

private:
    std::string courseName;
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int eCount;
};


#endif //GRADE_BOOK_GRADEBOOK_H
