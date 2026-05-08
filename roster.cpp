//
//  roster.cpp
//  C867 Project
//
//  Created by Aliyah Jackson
//

#include "roster.h"
#include <iostream>
using namespace std;

void Roster::add(string id, string first, string last, string email,
                 int age, int d1, int d2, int d3, DegreeProgram degree) {
    
    lastIndex++;
    classRosterArray[lastIndex] = new Student(id, first, last, email, age, d1, d2, d3, degree);
}

//
// Print all
//

void Roster::printAll() {
    for (int i = 0; i <= lastIndex; i++) {
        classRosterArray[i]->print();
    }
}

//
// Remove
//

void Roster::remove(string StudentID) {
    bool found = false;
    
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getStudentID() == StudentID) {
            found = true;
            delete classRosterArray[i];
            
            classRosterArray[i] = classRosterArray[lastIndex];
            classRosterArray[lastIndex] = nullptr;
            lastIndex--;
            
            cout << "Student " << StudentID << " removed.\n";
            return;
        }
    }
    
    if (!found) {
        cout << "Student not found: " << StudentID << endl;
    }
}

//
// Print invalid emails
//

void Roster::printInvalidEmails() {
    cout << "Invalid emails:\n";
    
    for (int i = 0; i <= lastIndex; i++) {
        string email = classRosterArray[i]->getEmail();
        
        bool hasAt = false;
        bool hasDot = false;
        bool hasSpace = false;
        
        for (char c : email) {
            if (c == '@') hasAt = true;
            if (c == '.') hasDot = true;
            if (c == ' ') hasSpace = true;
        }
        
        if (!hasAt || !hasDot || hasSpace) {
            cout << email << endl;
        
        }
    }
}

//
// Print average days
//
void Roster::printAverageDaysInCourse(string StudentID) {
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getStudentID() == StudentID) {
            int* days = classRosterArray[i]->getDaysInCourse();
            
            int avg = (days[0] + days[1] + days[2]) / 3;
            
            cout << "Average days in course for " << StudentID
            << ": " << avg << endl;
            
            return;
            
        }
    }
    
    cout << "Student not found: " << StudentID << endl;
    
}

//
// Print by degree program
//

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i <= lastIndex; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

//
// Destructor
//

Roster::~Roster() {
    for (int i = 0; i <= lastIndex; i++) {
        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
        }
    }
}
