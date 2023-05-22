
#include "roster.hpp"
#include "student.hpp"
#include <string>
#include <iostream>
using namespace std;

Roster classRoster;

void Roster::add(string studentID, string firstName, string lastName, string email, int age, int days1, int days2, int days3, DegreeProgram program) {
    for (int i = 0; i < 5; i++) {
        classRosterArray[i] = new Student(studentID, firstName, lastName, email, age, days1, days2, days3, program);
    }
}

/*
void Roster::addIn(const string data) {
    for (int i = 0; i < 5; i++) {
        classRosterArray[i] = parse(data[i]);
    }
}
*/

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

    /*
    string tempData[9];

    tempData[0] = studentID;
    tempData[1] = firstName;
    tempData[2] = lastName;
    tempData[3] = email;
    tempData[4] = stoi(age);
    tempData[5] = days1;
    tempData[6] = days2;
    tempData[7] = days3;
    tempData[8] = prog;
    */

    cout << studentID << "\t" << firstName << "\t" << lastName << "\t" << email << "\t" << age << "\t" << days1 << "\t" << days2 << "\t" << days3 << "\t" << program << "\t" << prog << endl;

    // cout << daysInCourse[0] << "\t" << daysInCourse[1] << "\t" << daysInCourse[2] << endl;

    return new Student(studentID, firstName, lastName, email, age, days1, days2, days3, program);

}
