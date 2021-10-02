//
// Created by dityath on 02/10/21.
//

#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct student;

int NMAX;

struct student {
    string name;
    float ipk;
    int n[NMAX];
};

void add(student &s, int n[NMAX]);
void show(student s);
int find(student s);

#endif //WEEK_2_ADT_STUDENT_H
