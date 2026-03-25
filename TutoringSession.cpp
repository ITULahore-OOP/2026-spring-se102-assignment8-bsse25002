#include "TutoringSession.h"

//Constructor
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* s) {
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}

//Getter
double TutoringSession::getDuration() const {
    return durationMinutes;
}

//Functionalities
void TutoringSession::displaySession() {
    cout << "Session ID: " << sessionID << endl;
    cout << "Duration Minutes: " << durationMinutes << endl;
}

TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    this->durationMinutes += other.durationMinutes;
    return *(this);
}

bool operator>(const TutoringSession& s1, const TutoringSession& s2) {
    return (s1.getDuration() > s2.getDuration());
}