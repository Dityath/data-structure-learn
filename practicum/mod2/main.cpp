//Ditya Athallah
//1301194095

#include "student.h"

using namespace std;

int main()
{
    int Max;
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Amount Of Data: ";
    cin >> Max;

    student m[Max];

    cout << endl;

    //input
    for (int i = 0; i < Max; ++i) {
        cout << "Data : " << i+1 << endl;
        inputStudent(m[i], a, b, c);
    }

    //highest gpa
    cout << endl;

    float high = 0;
    string highestStudent;

    for (int i = 0; i < Max; ++i) {
        if (high < m[i].gpa) {
            highestStudent = m[i].name;
        }
    }

    cout << "The highest GPA is get by " << highestStudent << endl;

    //mean of gpa
    float sum = 0;

    for (int i = 0; i < Max; ++i) {
        sum += m[i].gpa;
    }

    cout << "Mean of GPA : " << sum/Max << endl;

    //amount major
    cout << "Amount of major" << endl;
    cout << "Art of Coffee :" << a << endl;
    cout << "Creative Content :" << b << endl;
    cout << "Mental Health :" << c << endl;

}
