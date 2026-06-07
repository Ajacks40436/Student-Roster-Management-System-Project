#include "student.h"
#include <iostream>

using namespace std;

Student::Student() {}

Student::Student(string id, string first, string last,
                 string mail, int a,
                 int d1, int d2, int d3,
                 DegreeProgram degree) {

    studentID = id;
    firstName = first;
    lastName = last;
    email = mail;
    age = a;

    daysInCourse[0] = d1;
    daysInCourse[1] = d2;
    daysInCourse[2] = d3;

    degreeProgram = degree;
}

Student::~Student() {}

string Student::getStudentID() {
    return studentID;
}

string Student::getEmail() {
    return email;
}

int* Student::getDaysInCourse() {
    return daysInCourse;
}

DegreeProgram Student::getDegreeProgram() {
    return degreeProgram;
}

void Student::setStudentID(string id) {
    studentID = id;
}

void Student::print() {
    cout << studentID << "\t"
         << firstName << "\t"
         << lastName << "\t"
         << email << "\t"
         << age << "\t{"
         << daysInCourse[0] << ", "
         << daysInCourse[1] << ", "
         << daysInCourse[2] << "}\t";

    if (degreeProgram == SECURITY) cout << "SECURITY";
    else if (degreeProgram == NETWORK) cout << "NETWORK";
    else cout << "SOFTWARE";

    cout << endl;
}
