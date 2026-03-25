#include <iostream>
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "Department.h"
#include "TutoringSession.h"

using namespace std;

int main() {

    Department dept("Computer Science");

    // Sample objects (you can also make these dynamic via input)
    AccessCard card1("C101", 1);
    AccessCard card2("C102", 2);

    Student* s1 = new Student("Ali", 101, 3.5);
    Staff* st1 = new Staff("Ahmed", 201, 50000, card1);
    TeachingAssistant* ta1 = new TeachingAssistant("Sara", 301, 3.8, 30000, card2, 20);

    // Add to department (Polymorphism)
    dept.addMember(s1);
    dept.addMember(st1);
    dept.addMember(ta1);

    // Tutoring Sessions
    TutoringSession ts1(1, 60, ta1, s1);
    TutoringSession ts2(2, 45, ta1, s1);

    int choice;

    while (true) {
        cout << "\n===== SMART UNIVERSITY SYSTEM =====\n";
        cout << "1. Display All Roles\n";
        cout << "2. Display Access Card (Staff)\n";
        cout << "3. Grade Assignment (TA)\n";
        cout << "4. Show Tutoring Sessions\n";
        cout << "5. Merge Sessions (+ Operator)\n";
        cout << "6. Compare Sessions (> Operator)\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n--- All Members ---\n";
            dept.displayAllRoles();   // Run-time polymorphism
        }

        else if (choice == 2) {
            cout << "\n--- Staff Card Info ---\n";
            st1->displayCard();      // Composition demo
        }

        else if (choice == 3) {
            int type;
            cout << "1. Numeric Grade\n2. Letter Grade\nChoose: ";
            cin >> type;

            if (type == 1) {
                int score;
                cout << "Enter score: ";
                cin >> score;
                ta1->gradeAssignment(score);   // Overloaded
            }
            else {
                string grade;
                cout << "Enter letter grade: ";
                cin >> grade;
                ta1->gradeAssignment(grade);   // Overloaded
            }
        }

        else if (choice == 4) {
            cout << "\n--- Session 1 ---\n";
            ts1.displaySession();

            cout << "\n--- Session 2 ---\n";
            ts2.displaySession();
        }

        else if (choice == 5) {
            cout << "\n--- Merged Session ---\n";
            TutoringSession merged = ts1 + ts2;   // Operator +
            merged.displaySession();
        }

        else if (choice == 6) {
            if (ts1 > ts2) {   // Non-member operator
                cout << "Session 1 is longer\n";
            } else {
                cout << "Session 2 is longer\n";
            }
        }

        else if (choice == 0) {
            cout << "Exiting...\n";
            break;
        }

        else {
            cout << "Invalid choice!\n";
        }
    }

    //Cleanup
    delete s1;
    delete st1;
    delete ta1;

    return 0;
}