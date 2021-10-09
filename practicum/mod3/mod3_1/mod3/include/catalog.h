#ifndef CATALOG_H
#define CATALOG_H

//DityaAthallah
//130194095

#include <iostream>
#include <cstdlib>

using namespace std;

const int nMax = 50;

struct catalog {
    int data[nMax];
    int max;
    int num;
};

void add_data(catalog &c, int x);
void view_data(catalog c);
int search_data(catalog c, int x);

#endif // CATALOG_H
