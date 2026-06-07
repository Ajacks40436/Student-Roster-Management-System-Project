#include "roster.h"
#include <iostream>

using namespace std;

Roster::Roster() {
    lastIndex = -1;
}

Roster::~Roster() {
    for (int i = 0; i <= lastIndex; i++) {
        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
}

void Roster::add(string id, string first, string last,
                 string email, int age,
                 int d1, int d2, int d3,
                 DegreeProgram degree) {

    lastIndex++;
    classRosterArray[lastIndex] =
        new Student(id, first, last, email, age, d1, d2, d3, degree);
}

void Roster::printAll() {
    cout << "\n=== CLASS ROSTER ===\n";
    for (int i = 0; i <= lastIndex; i++) {
        classRosterArray[i]->print();
    }
}

void Roster::printInvalidEmails() {

    cout << "\n=== INVALID EMAILS ===\n";

    for (int i = 0; i <= lastIndex; i++) {

        string email = classRosterArray[i]->getEmail();

        bool at = false, dot = false, space = false;

        for (char c : email) {
            if (c == '@') at = true;
            if (c == '.') dot = true;
            if (c == ' ') space = true;
        }

        if (!at || !dot || space) {
            cout << email << endl;
        }
    }
}

void Roster::printAverageDaysInCourse() {

    cout << "\n=== AVERAGE DAYS IN COURSE ===\n";

    for (int i = 0; i <= lastIndex; i++) {

        Student* s = classRosterArray[i];
        int* d = s->getDaysInCourse();

        int avg = (d[0] + d[1] + d[2]) / 3;

        cout << s->getStudentID()
             << ": "
             << avg
             << endl;
    }
}

void Roster::printByDegreeProgram(DegreeProgram degree) {

    cout << "\n=== DEGREE FILTER ===\n";

    for (int i = 0; i <= lastIndex; i++) {

        if (classRosterArray[i]->getDegreeProgram() == degree) {
            classRosterArray[i]->print();
        }
    }
}

void Roster::remove(string studentID) {

    for (int i = 0; i <= lastIndex; i++) {

        if (classRosterArray[i]->getStudentID() == studentID) {

            cout << "\nRemoving student " << studentID << endl;

            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[lastIndex];
            classRosterArray[lastIndex] = nullptr;
            lastIndex--;

            return;
        }
    }

    cout << "Student not found: " << studentID << endl;
}
