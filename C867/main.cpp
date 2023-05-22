
#include <iostream>

#include<string>
#include "student.hpp"
#include "degree.h"
#include "roster.hpp"
#pragma once
using namespace std;

int main() {

    cout << "Course Title: Scripting and Programming - Applications - C867" << "\n";
    cout << "Programming Language Used: C++" << "\n";
    cout << "WGU Student ID: 010815435" << "\n";
    cout << "Student Name: Thomas Diggs" << endl;

    const string studentData[] = {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Thomas,Diggs,tdigg21@wgu.edu,33,30,30,30,SOFTWARE"
    };
    
    Roster classRoster;
    
    classRoster.parse(studentData);

    cout << "Printing all invalid emails:" << endl;
    classRoster.printInvalidEmails();

    cout << "Printing all students in roster:" << endl;
    classRoster.printAll();

    cout << "Printing all students' average days in the course:" << endl;
    for (int i = 0; i < 5; i++) {
        string studentIDnow = classRoster.getRoster(i)->getStudentID();
        classRoster.printAverageDaysInCourse(studentIDnow);
    }
    cout << endl;

    cout << "Printing all Software students:" << endl;
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

    cout << "Removing student with ID of A3:" << endl;
    classRoster.remove("A3");
    classRoster.printAll();

    cout << "Removing student with ID of A3 again:" << endl;
    classRoster.remove("A3");

    return 0;
}
