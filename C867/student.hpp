
#ifndef student_hpp
#define student_hpp

#include <stdio.h>

#include "degree.h"
#include <string>
#pragma once
using namespace std;

/*
D. For the Student class, do the following:
    1. Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:
        - student ID
        - first name
        - last name
        - email address
        - age
        - array of number of days to complete each course
        - degree program
    2. Create each of the following functions in the Student class:
        a. an accessor (i.e., getter) for each instance variable from part D1
        b. a mutator (i.e., setter) for each instance variable from part D1
        c. All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
        d. constructor using all of the input parameters provided in the table
        e. print() to print specific student data
*/

class Student {

private:
    //Instance variables declarations
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysInCourse[3];
    DegreeProgram program;

public:
    //Print function declaration
    void print();

    // Student object contructor
    Student();
    ~Student() {

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
