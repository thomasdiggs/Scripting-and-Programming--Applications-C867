
#include "roster.hpp"
#include "student.hpp"
#include <string>
#include <iostream>
using namespace std;

Student* Roster::parse(string data) {

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

    int daysInCourse[3];
    daysInCourse[0] = days1;
    daysInCourse[1] = days2;
    daysInCourse[2] = days3;

    return new Student(studentID, firstName, lastName, email, age, daysInCourse, program);

}

void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr){
            classRosterArray[i]->print();
        }
    }
    cout << endl;
}

// Function definition to add student data from given array into student objects
void Roster::add(const string data[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        classRosterArray[i] = parse(data[i]);
        // Printing memory addresses for testing purposes
        // cout << classRosterArray[i] << "\n";
    }
    cout << endl;
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

// Function declaration to compute average days in course for a particular student and print
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

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; i++) {
        DegreeProgram tempProgram = classRosterArray[i]->getDegreeProgram();
        if (tempProgram == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}
