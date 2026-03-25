#ifndef ACCESSCARD
#define ACCESSCARD

//Includes
#include <iostream>
#include <string>

using namespace std;

//class
class AccessCard {
private:
    //Attributes
    string cardID;
    int accessLevel;

public:
    //Construction
    AccessCard(string cardID = "", int accessLevel = 0);

    //Getters
    string getCardID();
    int getAccessLevel();

    //Functionality
    void displayCardInfo();
};

#endif