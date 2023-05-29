
#include "roster.hpp"
#include "student.hpp"
#include "degree.h"
#include <string>
#include <iostream>
using namespace std;

/*
E. Create a Roster class (roster.cpp) by doing the following:
    1. Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
    2. Create a student object for each student in the data table and populate classRosterArray.
        a. Parse each set of data identified in the “studentData Table.”
        b. Add each student object to classRosterArray.
3. Define the following functions:
    a. public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.
    b. public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
    c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
    d. public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
    e. public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user. Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
    f. public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.
*/

// Function definition to add student data from given array into student objects
void Roster::populateStudents(const string data[]) {
    for (int i = 0; i < 5; i++) {
        parse(data[i]);
    }
    cout << endl;
}

//a. Parse each set of data identified in the “studentData Table.”
void Roster::parse(string data) {

    size_t first = data.find(',');
    size_t second = data.find(',', first + 1);
    size_t third = data.find(',', second + 1);
    size_t fourth = data.find(',', third + 1);
    size_t fifth = data.find(',', fourth + 1);
    size_t sixth = data.find(',', fifth + 1);
    size_t seventh = data.find(',', sixth + 1);
    size_t eighth = data.find(',', seventh + 1);
    size_t length = data.size();

    string studentID = data.substr(0, first);
    string firstName = data.substr(first + 1, second - first - 1);
    string lastName = data.substr(second + 1, third - second - 1);
    string email = data.substr(third + 1, fourth - third - 1);
    int age = stoi(data.substr(fourth + 1, fifth - fourth - 1));
    int days1 = stoi(data.substr(fifth + 1, sixth - fifth - 1));
    int days2 = stoi(data.substr(sixth + 1, seventh - sixth - 1));
    int days3 = stoi(data.substr(seventh + 1, eighth - seventh - 1));
    
    // Convert a data type of string to an enumerated value for the program parameter.
    string prog = data.substr(eighth + 1, length - eighth - 1);

    DegreeProgram program;
    if (prog == "SECURITY") {
        program = SECURITY;
    } else if (prog == "NETWORK") {
        program = NETWORK;
    } else if (prog == "SOFTWARE") {
        program = SOFTWARE;
    } else {
        program = UNDEFINED;
    }

    add(studentID, firstName, lastName, email, age, days1, days2, days3, program);
}

//Function that sets the instance variables from part D1 and updates the roster.
void Roster::add(string studentID, string firstName, string lastName, string email, int age, int days1, int days2, int days3, DegreeProgram program) {

    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] == nullptr) {
            classRosterArray[i] = new Student;
            classRosterArray[i]->setStudentID(studentID);
            classRosterArray[i]->setFirstName(firstName);
            classRosterArray[i]->setLastName(lastName);
            classRosterArray[i]->setEmail(email);
            classRosterArray[i]->setAge(age);
            classRosterArray[i]->setDaysInCourse(days1, days2, days3);
            classRosterArray[i]->setDegreeProgram(program);
            break;
        }
    }

}

// Function declaration to remove student data from classRosterArray
void Roster::remove(string studentID) {
    bool ifFound = false;
    
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            string tempID = classRosterArray[i]->getStudentID();
            if (tempID == studentID) {
                delete classRosterArray[i];
                classRosterArray[i] = nullptr;
                ifFound = true;
            }
        }
    }
    
    if (ifFound == false) {
        cout << "Student ID not found \n";
    }
    cout << endl;
}

//Function that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
void Roster::printAverageDaysInCourse(string studentID){
    for (int i = 0; i < 5; i++) {
        string ID = classRosterArray[i]->getStudentID();
        if (ID == studentID) {
            int day1 = classRosterArray[i]->getDaysInCourse(0);
            int day2 = classRosterArray[i]->getDaysInCourse(1);
            int day3 = classRosterArray[i]->getDaysInCourse(2);
            int avg = (day1 + day2 + day3) / 3;
            cout << "Average days in course for student ID: " << ID << " is " << avg << " days";
        }
    }
    cout << endl;
}

// Function declaration to loop through classRosterArray and print the average days in course for each element
void Roster::loopAndPrintAvgDays() {
    for (int i = 0; i < 5; i++) {
        string ID = classRosterArray[i]->getStudentID();
        printAverageDaysInCourse(ID);
    }
    cout << endl;
}

//Function that verifies student email addresses and displays all invalid email addresses to the user. Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; i++) {
        string tempEmail = classRosterArray[i]->getEmail();
        size_t atSymbol = tempEmail.find("@");
        size_t period = tempEmail.find(".");
        size_t spaces = tempEmail.find(" ");
        if ((atSymbol != string::npos) && (period != string::npos) && (spaces == string::npos)) {
            
        } else {
            cout << "Invalid email " << tempEmail << "\n";
        }
    }
    cout << endl;
}

//Function that prints out student information for a degree program specified by an enumerated type
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; i++) {
        DegreeProgram tempProgram = classRosterArray[i]->getDegreeProgram();
        if (tempProgram == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

//Function that prints a complete tab-separated list of student data
void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr){
            classRosterArray[i]->print();
        }
    }
    cout << endl;
}

//Destructor
Roster::~Roster() {
    for (int i = 0; i < 5; i++) {
        delete classRosterArray[i];
    }
};
