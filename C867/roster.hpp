
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
    void addIn(const string data);
    void add(string studentID, string firstName, string lastName, string email, int age, int days1, int days2, int days3, DegreeProgram program);
    Student* classRosterArray[5];
    Roster() {
        for (int i = 0; i < 5; i++) {
            classRosterArray[i] = nullptr;
        }
    };

};

#endif
