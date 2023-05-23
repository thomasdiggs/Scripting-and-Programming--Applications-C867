
#ifndef roster_hpp
#define roster_hpp

#include <stdio.h>
#include "student.hpp"
#include <string>
#pragma once
using namespace std;

class Roster {

private:
    

public:
    Student* parse(string data);
    Student* classRosterArray[5];
    Roster() {
        for (int i = 0; i < 5; i++) {
            classRosterArray[i] = nullptr;
        }
    };
    void printAll();
    
    // Function declaration to add student data from given array into student objects
    void add(const string data[], int arraySize);

    // Function declaration to remove student data from classRosterArray
    void remove(string studentID);

    // Function declaration to compute average days in course and print
    void printAverageDaysInCourse(string studentID);
    
    void loopAndPrintAvgDays();
    
    void printInvalidEmails();
    
    void printByDegreeProgram(DegreeProgram degreeProgram);

};

#endif
