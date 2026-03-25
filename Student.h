#ifndef STUDENT
#define STUDENT

//Includes
#include "UniversityMember.h"

//class
class Student : virtual public UniversityMember {
private:
    //Attributes
    double cgpa;

public:
    //Constructor
    Student(string name, int memberID, double cgpa);
    
    //Getter
    double getCGPA();

    //Setter
    void updateCGPA(double cgpa);

    //Functionality
    void displayRole() override;
};

#endif
