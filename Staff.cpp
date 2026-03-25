#include "Staff.h"

//Constructor
Staff::Staff(string name, int memberID, double salary, AccessCard card) : UniversityMember(name, memberID) {
    this->salary = salary;
    this->card = card;
}

//Getter
double Staff::getSalary() {
    return salary;
}

//Functionality
void Staff::displayRole() {
    cout << "Role: Staff" << endl;
}

void Staff::displayCard() {
    card.displayCardInfo();
}