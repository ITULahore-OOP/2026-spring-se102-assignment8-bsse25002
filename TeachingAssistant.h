#ifndef TEACHINGASSISTANT
#define TEACHINGASSISTANT

#include "Student.h"
#include "Staff.h"

class TeachingAssistant : public Student, public Staff {
private:
    //Attributes
    int workingHours;

public:
    //Constructor
    TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);

    //Functionalities
    void displayRole() override;
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);
};

#endif