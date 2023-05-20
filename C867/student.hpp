
#ifndef student_hpp
#define student_hpp

#include <stdio.h>

#include "degree.h"
#include<string>
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
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int getDaysInCourse(int i);
    DegreeProgram getDegreeType();

    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setProgram(DegreeProgram programType);

    void print();

    Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[3], DegreeProgram programType) {
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->age = age;
        this->daysInCourse[0] = daysInCourse[0];
        this->daysInCourse[1] = daysInCourse[1];
        this->daysInCourse[2] = daysInCourse[2];
        this->programType = programType;
    }

    Student();

};

#endif
