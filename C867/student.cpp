
#include "student.hpp"

#include<iostream>
#include "degree.h"
#pragma once
using namespace std;

void Student::setStudentID(string studentID) {
    this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;
}

void Student::setEmail(string email) {
    this->email = email;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDaysInCourse(int *daysInCourse) {
    this->daysInCourse[0] = daysInCourse[0];
    this->daysInCourse[1] = daysInCourse[1];
    this->daysInCourse[2] = daysInCourse[2];
}

void Student::setProgram(DegreeProgram programType) {
    this->programType = programType;
}


string Student::getStudentID() {
    return this->studentID;
}

string Student::getFirstName() {
    return this->firstName;
}

string Student::getLastName() {
    return this->lastName;
}

string Student::getEmail() {
    return this->email;
}

int Student::getAge() {
    return this->age;
}

int Student::getDaysInCourse(int i) {
    return this->daysInCourse[i];
}

DegreeProgram Student::getDegreeType() {
    return this->programType;
}

void Student::print() {

    cout << this->studentID << "\t";
    cout << "First Name: " << this->firstName << "\t";
    cout << "Last Name: " << this->lastName << "\t";
    cout << "Email: " << this->email << "\t";
    cout << "Age: " << this->age << "\t";
    cout << "DaysInCourse: {" << this->daysInCourse[0] << ", " << this->daysInCourse[1] << ", " << this->daysInCourse[2] << "} " << "\t";
    cout << "Degree Program: " << this->programType << endl;
}
