#ifndef TP_2_STD_STUDENT_H
#define TP_2_STD_STUDENT_H

#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct mahasiswa;

const int Max = 5;

struct mahasiswa {
    string SID;
    int Score[5];
};

void inputData_1301194095(mahasiswa &m);
float mean_1301194095(mahasiswa m);
void showData_1301194095(mahasiswa m);

#endif