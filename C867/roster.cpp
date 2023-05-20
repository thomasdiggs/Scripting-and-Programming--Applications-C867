//
//  roster.cpp
//  C867
//
//  Created by Thomas Diggs on 5/20/23.
//

#include "roster.hpp"


/*
 #include "roster.h"
 #include <iostream>
 #include <string>
 #pragma once
 using namespace std;

 Student* Roster::getRoster(int index) {
     return classRosterArray[index];
 }

 void Roster::parse(const string data[5]) {
     for (int i = 0; i < 5; i++) {
         this->classRosterArray[i] = parse1(data[i]);
     }
 }

 Student* Roster::parse1(string info) {

     size_t first = info.find(",");
     size_t second = info.find(",", first + 1);
     size_t third = info.find(",", second + 1);
     size_t fourth = info.find(",", third + 1);
     size_t fifth = info.find(",", fourth + 1);
     size_t sixth = info.find(",", fifth + 1);
     size_t seventh = info.find(",", sixth + 1);
     size_t eighth = info.find(",", seventh + 1);
     size_t ninth = info.find(",", eighth + 1);

     string id = info.substr(0, first);
     string firstName = info.substr(first + 1, second - first - 1);
     string lastName = info.substr(second + 1, third - second - 1);
     string email = info.substr(third + 1, fourth - third - 1);
     int age = stoi(info.substr(fourth + 1, fifth - fourth - 1));
     int days[3];
     days[0] = stoi(info.substr(fifth + 1, sixth - fifth - 1));
     days[1] = stoi(info.substr(sixth + 1, seventh - sixth - 1));
     days[2] = stoi(info.substr(seventh + 1, eighth - seventh - 1));
     string degree = info.substr(eighth + 1, ninth - eighth - 1);

     DegreeProgram program;
     if (degree == "SECURITY") {
         program = DegreeProgram::SECURITY;
     }
     else if (degree == "NETWORK") {
         program = DegreeProgram::NETWORK;
     }
     else {
         program = DegreeProgram::SOFTWARE;
     }

     return new Student(id, firstName, lastName, email, age, days, program);
 }

 void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
     int daysInCourse[] = { daysInCourse1, daysInCourse2, daysInCourse3 };

     for (int i = 0; i < 5; i++) {
         if (classRosterArray[i] == nullptr) {
             classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeprogram);
             return;
         }
     }

     cout << "classRosterArray is full." << endl;
 }

 void Roster::remove(string studentID) {
     for (int i = 0; i < 5; i++) {

         if (classRosterArray[i] == nullptr) {
             continue;
         } else if (classRosterArray[i]->getID() == studentID) {
             classRosterArray[i] = nullptr;
             return;
         }
     }

     cout << "Error: Student ID " << studentID << " was not found." << endl;
 }

 void Roster::printAll() {

     for (int i = 0; i < 5; i++) {
         if (classRosterArray[i] != nullptr) {
             classRosterArray[i]->print();
         }
     }

     cout << endl << endl;
 }

 void Roster::printAverageDaysInCourse(string studentID) {
     for (int i = 0; i < 5; i++) {
         string id = classRosterArray[i]->getID();
         if (id == studentID) {
             int days1 = classRosterArray[i]->getDays(0);
             int days2 = classRosterArray[i]->getDays(1);
             int days3 = classRosterArray[i]->getDays(2);
             
             cout << "ID: " << id << " - Average Number of Days in Course: " << (days1 + days2 + days3) / 3 << endl;

             return;
         }
     }
 }

 void Roster::printInvalidEmails() {

     for (int i = 0; i < 5; i++) {
         size_t atFound = classRosterArray[i]->getEmail().find('@');
         size_t periodFound = classRosterArray[i]->getEmail().find('.');
         size_t spaceFound = classRosterArray[i]->getEmail().find(' ');

         if ((atFound == std::string::npos) or (periodFound == std::string::npos) or (spaceFound != std::string::npos)) {
             cout << classRosterArray[i]->getEmail() << endl;
         }
     }
     cout << endl;
 }

 void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
     for (int i = 0; i < 5; i++) {
         DegreeProgram degree = classRosterArray[i]->getProgram();

         if (degree == degreeProgram) {
             classRosterArray[i]->print();
         }
     }
     cout << endl;
 }
 */
