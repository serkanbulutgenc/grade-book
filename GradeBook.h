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
    void inputGrades();
    void displayGradeReport() const;
    int maximum(int,int, int) const;

private:
    std::string courseName;
    int maximumGrade;
};


#endif //GRADE_BOOK_GRADEBOOK_H
