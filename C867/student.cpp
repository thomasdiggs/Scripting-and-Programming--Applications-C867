
#include "student.hpp"

#include <iostream>
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

//Accessor definitions
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

//Mutator definitions
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

//Print function definition to display data related to student object
void Student::print() {
    cout << this->studentID << "\t";
    cout << "First Name: " << this->firstName << "\t";
    cout << "Last Name: " << this->lastName << "\t";
    cout << "Email: " << this->email << "\t";
    cout << "Age: " << this->age << "\t";
    cout << "DaysInCourse: {" << this->daysInCourse[0] << ", " << this->daysInCourse[1] << ", " << this->daysInCourse[2] << "}" << "\t";
    cout << "Degree Program: " << Programs[this->program] << endl;
}

//Student constructor definition
Student::Student() {
    studentID = "";
    firstName = "";
    lastName = "";
    email = "";
    age = 0;
    program = UNDEFINED;
    daysInCourse[0] = 0;
    daysInCourse[1] = 0;
    daysInCourse[2] = 0;
}
