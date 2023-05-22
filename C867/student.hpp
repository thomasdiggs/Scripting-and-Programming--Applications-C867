
#ifndef student_hpp
#define student_hpp

#include <stdio.h>

#include "degree.h"
#include <string>
#pragma once
using namespace std;

class Student {

private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int days1;
    int days2;
    int days3;
    int daysInCourse[3];
    DegreeProgram program;

public:
    Student(string studentID, string firstName, string lastName, string email, int age, int days1, int days2, int days3, DegreeProgram program) {
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->age = age;
        this->days1 = days1;
        this->days2 = days2;
        this->days3 = days3;
        this->program = program;
        this->daysInCourse[0] = days1;
        this->daysInCourse[1] = days2;
        this->daysInCourse[2] = days3;
    }

};

#endif
