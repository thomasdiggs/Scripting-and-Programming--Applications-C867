
#include "student.hpp"

#include<iostream>
#include "degree.h"
#pragma once
using namespace std;

void Student::setStudentID(string studentID) {
    studentID = studentID;
}

void Student::setFirstName(string firstName) {
    firstName = firstName;
}

void Student::setLastName(string lastName) {
    lastName = lastName;
}

void Student::setEmail(string email) {
    email = email;
}

void Student::setAge(int age) {
    age = age;
}

void Student::setDaysInCourse(int *daysInCourse) {
    daysInCourse[0] = daysInCourse[0];
    daysInCourse[1] = daysInCourse[1];
    daysInCourse[2] = daysInCourse[2];
}

void Student::setProgram(DegreeProgram programType) {
    programType = programType;
}

string Student::getStudentID() const {
    return studentID;
}

string Student::getFirstName() const {
    return firstName;
}

string Student::getLastName() const {
    return lastName;
}

string Student::getEmail() const {
    return email;
}

int Student::getAge() const {
    return age;
}

int Student::getDaysInCourse(int i) const {
    return daysInCourse[i];
}

DegreeProgram Student::getDegreeType() const {
    return programType;
}

void Student::print() const {
    cout << "Student ID: " << studentID << "\n";
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
    cout << "Email: " << email << "\n";
    cout << "Age: " << age << "\n";
    cout << "Days in Course: " << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "\n";
    cout << "Degree Program: " << programType << endl;
}
