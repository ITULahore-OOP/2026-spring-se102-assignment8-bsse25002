#ifndef DEPARTMENT
#define DEPARTMENT

//Includes
#include "UniversityMember.h"

//class
class Department {
private:
    //Attributes
    string departmentName;
    UniversityMember* members[50];
    int memberCount;

public:
    //Constructor
    Department(string departmentName);

    //Functionalities
    void addMember(UniversityMember* member);
    void displayAllRoles();
};

#endif