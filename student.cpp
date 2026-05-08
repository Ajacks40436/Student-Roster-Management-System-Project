//
//  student.cpp
//  C867 Project
//
//  Created by Aliyah Jackson
//

#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string id, string first, string last, string email,
                 int age, int d1, int d2, int d3, DegreeProgram degree) {
    StudentID = id;
    firstName = first;
    lastName = last;
    this->email = email;
    this->age = age;
    daysInCourse[0] = d1;
    daysInCourse[1] = d2;
    daysInCourse[2] = d3;
    
    degreeProgram = degree;
    
}

//
// Getters
//

string Student::getStudentID() {
    return StudentID;
}

string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getEmail() {
    return email;
}

int Student::getAge() {
    return age;
}

int* Student::getDaysInCourse() {
    return daysInCourse;
}

DegreeProgram Student::getDegreeProgram() {
    return degreeProgram;
}

//
// Setters
//

void Student::setStudentID(string id) {
    StudentID = id;
}

void Student::setFirstName(string first) {
    firstName = first;
}

void Student::setLastName(string last) {
    lastName = last;
}

void Student::setEmail(string email) {
    this->email = email;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDegreeProgram(DegreeProgram degree) {
    degreeProgram = degree;
}

//
// Print
//

void Student::print() {
    cout << StudentID << "\t";
    cout << "First Name: " << firstName << "\t";
    cout << "Last Name: " << lastName << "\t";
    cout << "Email: " << email << "\t";
    cout << "Age: " << age << "\t";
    cout << "Days In Course:  {"
    << daysInCourse[0] << ", "
    << daysInCourse[1] << ", "
    << daysInCourse[2] << "} ";
    
    cout << "Degree Program: ";
    
    switch (degreeProgram) {
        case SECURITY:
            cout << "SECURITY";
            break;
        case NETWORK:
            cout << "NETWORK";
            break;
        case SOFTWARE:
            cout << "SOFTWARE";
            break;
    }
    
    cout << endl;
    
}

                
