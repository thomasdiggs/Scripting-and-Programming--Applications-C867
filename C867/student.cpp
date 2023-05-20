
#include "student.hpp"

#include<iostream>
#include "degree.h"
#pragma once
using namespace std;

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[3], DegreeProgram programType) {
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

void Student::setDaysInCourse(int daysInCourse[3]) {
    this->daysInCourse[0] = daysInCourse[0];
    this->daysInCourse[1] = daysInCourse[1];
    this->daysInCourse[2] = daysInCourse[2];
}

void Student::setProgram(DegreeProgram programType) {
    this->programType = programType;
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

DegreeProgram Student::getProgramType() const {
    return programType;
}

void Student::Print() {
    cout << "Student ID: " << studentID << '\n';
    cout << "First Name: " << firstName << '\n';
    cout << "Last Name: " << lastName << '\n';
    cout << "Email: " << email << '\n';
    cout << "Age: " << age << '\n';
    cout << "Days in Course: " << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << '\n';
    cout << "Degree Program: " << programType << endl;
}
