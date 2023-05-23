
#ifndef student_hpp
#define student_hpp

#include <stdio.h>

#include "degree.h"
#include <string>
#pragma once
using namespace std;

class Student {

private:
    // Student object instance variables
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysInCourse[3];
    DegreeProgram program;

public:
    void print();

    // Student object contructor
    Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[3], DegreeProgram program) {
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->age = age;
        this->program = program;
        this->daysInCourse[0] = daysInCourse[0];
        this->daysInCourse[1] = daysInCourse[1];
        this->daysInCourse[2] = daysInCourse[2];
    }

    // Accessor declarations
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmail() const;
    int getAge() const;
    int getDaysInCourse(int index) const;
    DegreeProgram getDegreeProgram() const;

    // Mutator declarations
    void setStudentID(string inputStudentID);
    void setFirstName(string inputFirstName);
    void setLastName(string inputLastName);
    void setEmail(string inputEmail);
    void setAge(int inputAge);
    void setDaysInCourse(int inputDays1, int inputDays2, int inputDays3);
    void setDegreeProgram(DegreeProgram inputProgram);

};

#endif
