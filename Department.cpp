#include "Department.h"

//Constructor
Department::Department(string departmentName) {
    this->departmentName = departmentName;
    memberCount = 0;
}

//Functionalities
void Department::addMember(UniversityMember* member) {
    if(memberCount >= 50) {
        cout << "Limit Reached!" << endl;
        return;
    }

    members[memberCount] = member;
    memberCount++;
}

void Department::displayAllRoles() {
    for(int i = 0;i < memberCount;i++) {
        members[i]->displayRole();
        cout << endl;
    }
}