#include "AccessCard.h"

//Construction
AccessCard::AccessCard(string cardID, int accessLevel) {
    this->cardID = cardID;
    this->accessLevel = accessLevel;
}

//Getters
string AccessCard::getCardID() {
    return cardID;
}

int AccessCard::getAccessLevel() {
    return accessLevel;
}

//Functionality
void AccessCard::displayCardInfo() {
    cout << "Card ID: " << cardID << endl;
    cout << "Access Level: " << accessLevel << endl;
}