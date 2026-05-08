//
//  student.h
//  C867 Project
//
//  Created by Aliyah Jackson
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"
using namespace std;

class Student {
private:
    string StudentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;
    
public:
    Student (string id, string first, string last, string email,
             int age, int d1, int d2, int d3, DegreeProgram degree);
    
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int* getDaysInCourse();
    DegreeProgram getDegreeProgram();
    

    void setStudentID(string id);
    void setFirstName(string first);
    void setLastName(string last);
    void setEmail(string email);
    void setAge(int age);
    void setDegreeProgram(DegreeProgram degree);
    
    void print();

    };
    
#endif
