
#include <iostream>
#include <string>
#include <array>
#include "student.hpp"
#include "roster.hpp"
using namespace std;

/*
F. Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:
    1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
    2. Create an instance of the Roster class called classRoster.
    3. Add each student to classRoster.
    4. Convert the following pseudo code to complete the rest of the  main() function:
        classRoster.printAll();
        classRoster.printInvalidEmails();

        //loop through classRosterArray and for each element:
        classRoster.printAverageDaysInCourse( "current_object's student id" );

        Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.

        classRoster.printByDegreeProgram(SOFTWARE);
        classRoster.remove("A3");
        classRoster.printAll();
        classRoster.remove("A3");
        //expected: the above line should print a message saying such a student with this ID was not found.
*/

void projectInfo() {
    cout << "Course Title: Scripting and Programming - Applications - C867" << "\n";
    cout << "Programming Language Used: C++" << "\n";
    cout << "WGU Student ID: 010815435" << "\n";
    cout << "Student Name: Thomas Diggs" << "\n" << endl;
}

int main() {

    //1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
    projectInfo();

    //2. Create an instance of the Roster class called classRoster.
    Roster classRoster;

    //A.  Modify the “studentData Table” to include your personal information as the last item.
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Thomas,Diggs,tdigg21@wgu.edu,33,20,30,40,SOFTWARE"
    };

    //3. Add each student to classRoster.
    classRoster.populateStudents(studentData);

    classRoster.printAll();

    classRoster.printInvalidEmails();

    /*
    F.4.    //loop through classRosterArray and for each element:
    classRoster.printAverageDaysInCourse( "current_object's student id" );

    Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.
    */
    classRoster.loopAndPrintAvgDays();
    
    classRoster.printByDegreeProgram(SOFTWARE);
    
    classRoster.remove("A3");

    classRoster.printAll();
    
    classRoster.remove("A3");
    //expected: the above line should print a message saying such a student with this ID was not found.

    cout << endl;

    return 0;

}
