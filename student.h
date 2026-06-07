#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"

class Student {
private:
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;

public:
    Student();
    Student(std::string id, std::string first, std::string last,
            std::string email, int age,
            int d1, int d2, int d3,
            DegreeProgram degree);

    ~Student();

    std::string getStudentID();
    std::string getEmail();
    int* getDaysInCourse();
    DegreeProgram getDegreeProgram();

    void print();

    void setStudentID(std::string id);
};

#endif
