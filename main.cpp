//
//  main.cpp
//  C867 Project
//
//  Created by Aliyah Jackson
//

#include <iostream>
#include <sstream>
#include "roster.h"

using namespace std;

//
// My info
//

int main() {
    cout << "Course: C867\n";
    cout << "Language: C++\n";
    cout << "Student ID: 012725986\n";
    cout << "Name: Aliyah Jackson\n\n";
    
    //
    // Student data
    //
    
    const string studentData[] = {
        
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Aliyah,Jackson,email@email.com,24,50,60,46,SOFTWARE"
           };
    
    //
    // Roster
    //
    
    Roster classRoster;
    
    //
    // Parse and add students
    //
    
    for (int i =0; i < 5; i++) {
        
        string data = studentData[i];
        
        string StudentID;
        string firstName;
        string lastName;
        string email;
        string ageString;
        string d1String;
        string d2String;
        string d3String;
        string degreeString;
        
        stringstream ss(data);
        
        getline(ss, StudentID, ',');
        getline(ss, firstName, ',');
        getline(ss, lastName, ',');
        getline(ss, email, ',');
        getline(ss, ageString, ',');
        getline(ss, d1String, ',');
        getline(ss, d2String, ',');
        getline(ss, d3String, ',');
        getline(ss, degreeString, ',');
        
        int age = stoi(ageString);
        int d1 = stoi(d1String);
        int d2 = stoi(d2String);
        int d3 = stoi(d3String);
        
        DegreeProgram degree;
        
        if (degreeString == "SECURITY") {
            degree = SECURITY;
        }
        else if (degreeString == "NETWORK") {
            degree = NETWORK;
        }
        else {
            degree = SOFTWARE;
        }
        
        classRoster.add(StudentID,
                        firstName,
                        lastName,
                        email,
                        age,
                        d1,
                        d2,
                        d3,
                        degree);
    }
    
        //
        // Print all students
        //
        
        classRoster.printAll();
        
        //
        // Print invalid emails
        //
        
        classRoster.printInvalidEmails();
        
        //
        // Print average days
        //
        
        for (int i = 1; i <= 5; i++) {
            classRoster.printAverageDaysInCourse("A" + to_string(i));
            
        }
        
        //
        // Print software students
        //
        
        classRoster.printByDegreeProgram(SOFTWARE);
        
        //
        // Remove A3
        //
        
        classRoster.remove("A3");
        
        //
        // Print all again
        //
        
        classRoster.printAll();
        
        //
        // Remove A3 again
        //
        
        classRoster.remove("A3");
        
        return 0;
    }
        
