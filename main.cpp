#include "roster.h"
#include <iostream>

using namespace std;

int main() {

    Roster classRoster;

    cout << "Student Roster System (C++)\n";
    cout << "Developer: Aliyah Jackson\n\n";

    classRoster.add("A1", "Maya", "Stone", "maya.stone@gmail.com", 22, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Liam", "Carter", "liam.carterdomain.com", 25, 50, 45, 60, NETWORK);
    classRoster.add("A3", "Noah", "Bennett", "noah.bennett@school", 21, 20, 25, 30, SOFTWARE);
    classRoster.add("A4", "Emma", "Reed", "emma.reed@outlook.com", 23, 40, 42, 38, SECURITY);
    classRoster.add("A5", "Olivia", "Grant", "olivia.grant@gmail.com", 24, 55, 60, 58, SOFTWARE);

    classRoster.printAll();
    classRoster.printInvalidEmails();
    classRoster.printAverageDaysInCourse();
    classRoster.printByDegreeProgram(SOFTWARE);

    classRoster.remove("A3");
    classRoster.remove("A3");

    classRoster.printAll();

    return 0;
}
