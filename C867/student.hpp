
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
    int daysInCourse[3];
    DegreeProgram programType;

public:
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmail() const;
    int getAge() const;
    int getDaysInCourse(int i) const;
    DegreeProgram getProgramType() const;
    
    void Print();

    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setProgram(DegreeProgram programType);

    Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[3], DegreeProgram programType);

};

#endif
