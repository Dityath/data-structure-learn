#include "student.h"

void inputData_1301194095(mahasiswa &m) {
    int i;

    cout << "SID : ";
    cin>> m.SID;

    i = 0;
    while (i < Max) {
        cout << "Score " << i+1 << " : ";
        cin >> (m.Score[i]);
        i++;
    }
}

float mean_1301194095(mahasiswa h) {

    float sum = 0;
    for (int i = 0; i < Max; ++i) {
        sum += h.Score[i];
    }

    return sum / 5;
}

void showData_1301194095(mahasiswa h) {

    cout << "Data of Student: " << endl;
    cout << "SID : " << h.SID << endl;
    cout << "Score :";
    for (int i = 0; i < Max; ++i) {
        cout << " " << h.Score[i] << " ";
    }
    cout << endl;

}

//yg liat github jangn dicopaas ngentot
//buat referensi ajg, semua aja lu copas