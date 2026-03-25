#ifndef UNIVERSITYMEMBER
#define UNIVERSITYMEMBER

//Includes
#include <iostream>
#include <string>

using namespace std;

//Class
class UniversityMember {
private:
    //Attributes
    string name;
    int memberID;

public:
    //Constructor
    UniversityMember(string name = "", int memberID = 0);

    //Destructor
    virtual ~UniversityMember();

    //Getters
    string getName();
    int getMemberID();

    //Functionality
    virtual void displayRole() = 0;
};

#endif