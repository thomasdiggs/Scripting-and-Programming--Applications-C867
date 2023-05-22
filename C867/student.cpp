
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

void Student::setDaysInCourse(int days1, int days2, int days3) {
    this->days1 = days1;
    this->days2 = days2;
    this->days3 = days3;
}

void Student::setProgram(DegreeProgram program) {
    this->program = program;
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

DegreeProgram Student::getProgram() const {
    return program;
}

void Student::Print() {
    cout << "Student ID: " << studentID << '\n';
    cout << "First Name: " << firstName << '\n';
    cout << "Last Name: " << lastName << '\n';
    cout << "Email: " << email << '\n';
    cout << "Age: " << age << '\n';
    cout << "Days in Course: " << days1 << ", " << days2 << ", " << days3 << '\n';
    cout << "Degree Program: " << program << endl;
}
