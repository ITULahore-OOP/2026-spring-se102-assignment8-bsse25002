#include "Student.h"

//Constructor
Student::Student(string name, int memberID, double cgpa) : UniversityMember(name, memberID) {
    this->cgpa = cgpa;
}

//Getter
double Student::getCGPA() {
    return cgpa;
}

//Setter
void Student::updateCGPA(double cgpa) {
    this->cgpa = cgpa;
}

//Functionality
void Student::displayRole() {
    cout << "Role: Student" << endl;
}