
#include <iostream>
#include <string>
#include "student.hpp"
#include "roster.hpp"
using namespace std;

int main() {

    cout << "Course Title: Scripting and Programming - Applications - C867" << "\n";
    cout << "Programming Language Used: C++" << "\n";
    cout << "WGU Student ID: 010815435" << "\n";
    cout << "Student Name: Thomas Diggs" << "\n" << endl;

    const string studentData[] = {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Thomas,Diggs,tdigg21@wgu.edu,33,30,30,30,SOFTWARE"
    };

    Roster classRoster;

    for (int i = 0; i < 5; i++) {
        classRoster.parse(studentData[i]);
    }

    cout << "\n" << endl;

    classRoster.classRosterArray[4] = new Student("A5", "Thomas", "Diggs", "tdigg21@wgu.edu", 33, 30, 40, 50, SOFTWARE);

    cout << classRoster.classRosterArray[4] << "\n" << endl;

    return 0;

}
