
#ifndef student_hpp
#define student_hpp

#include <stdio.h>

#include "degree.h"
#include<string>
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
    DegreeProgram program;

public:
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmail() const;
    int getAge() const;
    int getDaysInCourse(int i) const;
    DegreeProgram getProgram() const;
    
    void Print();

    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysInCourse(int day1, int day2, int day3);
    void setProgram(DegreeProgram program);
    
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
    }

};

#endif
