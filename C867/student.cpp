
#include "student.hpp"

#include <iostream>
using namespace std;

// Print function to display data within student object
void Student::print() {
    cout << this->studentID << "\t";
    cout << "First Name: " << this->firstName << "\t";
    cout << "Last Name: " << this->lastName << "\t";
    cout << "Email: " << this->email << "\t";
    cout << "Age: " << this->age << "\t";
    cout << "DaysInCourse: {" << this->daysInCourse[0] << ", " << this->daysInCourse[1] << ", " << this->daysInCourse[2] << "}" << "\t";
    cout << "Degree Program: " << Programs[this->program] << endl;
}

// Accessors
string Student::getStudentID() const {
    return this->studentID;
}

string Student::getFirstName() const {
    return this->firstName;
}

string Student::getLastName() const {
    return this->lastName;
}

string Student::getEmail() const {
    return this->email;
}

int Student::getAge() const {
    return this->age;
}

int Student::getDaysInCourse(int index) const {
    return this->daysInCourse[index];
}

DegreeProgram Student::getDegreeProgram() const {
    return this->program;
}

// Mutators
void Student::setStudentID(string inputStudentID) {
    this->studentID = inputStudentID;
}

void Student::setFirstName(string inputFirstName) {
    this->firstName = inputFirstName;
}

void Student::setLastName(string inputLastName) {
    this->lastName = inputLastName;
}

void Student::setEmail(string inputEmail) {
    this->email = inputEmail;
}

void Student::setAge(int inputAge) {
    this->age = inputAge;
}

void Student::setDaysInCourse(int inputDays1, int inputDays2, int inputDays3) {
    this->daysInCourse[0] = inputDays1;
    this->daysInCourse[1] = inputDays2;
    this->daysInCourse[2] = inputDays3;
}

void Student::setDegreeProgram(DegreeProgram inputProgram) {
    this->program = inputProgram;
}
