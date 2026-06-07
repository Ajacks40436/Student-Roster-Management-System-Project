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

    void add(std::string id, std::string first, std::string last,
             std::string email, int age,
             int d1, int d2, int d3,
             DegreeProgram degree);

    void printAll();
    void printInvalidEmails();
    void printAverageDaysInCourse();
    void printByDegreeProgram(DegreeProgram degree);
    void remove(std::string studentID);
};

#endif

