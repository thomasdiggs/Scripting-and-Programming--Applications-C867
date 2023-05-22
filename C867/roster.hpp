
#ifndef roster_hpp
#define roster_hpp

#include <stdio.h>

#include "student.hpp"
#pragma once
#include<iostream>
#include<string>
using namespace std;

class Roster {

public:
    Roster();
    ~Roster();

    void addStudent(string studentID, string firstName, string lastName, string email, int age, int day1, int day2, int day3, DegreeProgram programType);

    void removeStudent(string studentID);

    void printAll();

    void printAverageDaysInCourse(string studentID);

    void printInvalidEmails();

    void printByDegreeProgram(DegreeProgram programType);



    Student* getRoster(int index);
    void parse(const string data[5]);
    Student* parse1(string info);



private:
    Student* classRosterArray[5];

};

#endif
