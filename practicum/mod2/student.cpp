#include "student.h"

void inputStudent(student &m, int &a, int &b, int &c) {

    cout << "Name: ";
    cin >> m.name;

    cout << "SID : ";
    cin >> m.sid;

    if (m.sid.substr(1, 1) == "1") {
        cout << "Art of Coffee" << endl;
        a++;
    } else if (m.sid.substr(1, 1) == "2") {
        cout << "Creative Content" << endl;
        b++;
    } else if (m.sid.substr(1, 1) == "3") {
        cout << "Mental Health" << endl;
        c++;
    }

    cout << "semester : ";
    cin >> m.semester;

    cout << "GPA : ";
    cin >> m.gpa;

    if (m.gpa > 3.5 && m.semester <= 8) {
        cout << "CUMLAUDE" << endl;
    }

    cout << "Unique Code : ";
    cin >> m.uniqueCode;

    if (m.uniqueCode%2 == 1) {
        cout << "OUTSTANDING STUDENTS";
    }

    cout << endl;

}
