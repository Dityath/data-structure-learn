#ifndef CATALOG_H_INCLUDED
#define CATALOG_H_INCLUDED

//Ditya Athallah

#include <iostream>
#include <cstdlib>

using namespace std;

const int nMax = 50;
struct catalog {
    int data[nMax];
    int max, num;
};

void add_data(catalog &c, int x);
void view_data(catalog c);
int search_data(catalog c, int x);
void reversed_view(catalog c);
void delete_data(catalog &c);

#endif
