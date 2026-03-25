#ifndef TUTORINGSESSION
#define TUTORINGSESSION

//Includes
#include "TeachingAssistant.h"
#include "Student.h"

//class
class TutoringSession {
private:
    //Attributes
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;

public:
    //Constructor
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* s);

    //Getter
    double getDuration() const;

    //Functionalities
    void displaySession();
    TutoringSession operator+(const TutoringSession& other);
};

bool operator>(const TutoringSession& s1, const TutoringSession& s2);

#endif