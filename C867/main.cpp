
#include <iostream>
#include <string>
#include <array>
#include "student.hpp"
#include "roster.hpp"
using namespace std;

void projectInfo() {
    cout << "Course Title: Scripting and Programming - Applications - C867" << "\n";
    cout << "Programming Language Used: C++" << "\n";
    cout << "WGU Student ID: 010815435" << "\n";
    cout << "Student Name: Thomas Diggs" << "\n" << endl;
}

int main() {

    projectInfo();

    Roster classRoster;

    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Thomas,Diggs,tdigg21@wgu.edu,33,20,30,40,SOFTWARE"
    };

    int arraySize = sizeof(studentData)/sizeof(studentData[0]);

    classRoster.add(studentData, arraySize);

    classRoster.printAll();

    classRoster.printInvalidEmails();

    classRoster.loopAndPrintAvgDays();
    
    classRoster.printByDegreeProgram(SOFTWARE);
    
    classRoster.remove("A3");

    classRoster.printAll();
    
    classRoster.remove("A3");

    cout << endl;
    return 0;

}
