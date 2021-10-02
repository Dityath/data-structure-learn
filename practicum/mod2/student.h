//Ditya Athallah
//1301194095

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct student;

struct student {
    string name;
    string sid;
    float gpa;
    int semester;
    int uniqueCode;
};

void inputStudent(student &m, int &a, int &b, int &c);

#endif // STUDENT_H
