//
//  roster.h
//  C867 Project
//
//  Created by Aliyah Jackson
//

#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include "student.h"

class Roster {
private:
    Student* classRosterArray[5];
    int lastIndex;
    
public:
    Roster();
    ~Roster();
    
    void add(string id, string first, string last, string email,
             int age, int d1, int f2, int d3, DegreeProgram degree);
    
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string StudentID);
    void printByDegreeProgram(DegreeProgram degree);
    void printInvalidEmails();
};

#endif


