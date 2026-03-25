#ifndef STAFF
#define STAFF

//Includes
#include "UniversityMember.h"
#include "AccessCard.h"

//class
class Staff : virtual public UniversityMember {
private:
    //Attributes
    double salary;
    AccessCard card;

public:
    //Constructor
    Staff(string name, int memberID, double salary, AccessCard card);

    //Getter
    double getSalary();

    //Functionality
    void displayRole() override;
    void displayCard();
};

#endif