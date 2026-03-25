#include "UniversityMember.h"

//Constructor
UniversityMember::UniversityMember(string name, int memberID) {
    this->name = name;
    this->memberID = memberID;
}

//Destructor
UniversityMember::~UniversityMember() {
    cout << "University Member Destructor!" << endl;
}

//Getters
string UniversityMember::getName() {
    return name;
}

int UniversityMember::getMemberID() {
    return memberID;
}