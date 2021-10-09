#include "catalog.h"
//Ditya Athallah

void add_data(catalog &c, int x) {
    if (c.num < c.max) {
        c.data[++c.num] = x;
    }
}

int search_data(catalog c, int x) {
    for (int i = 0; i <= c.num; ++i) {
        if (c.data[i] == x) {
            return i;
        }
    }
    return -1;
}

void view_data(catalog c) {
    for (int i = 0; i <= c.num; ++i) {
        cout<<c.data[i] << " ";
    }
    cout<<endl;
}

void reversed_view(catalog c) {
    for (int i = c.num; i >= 0; --i) {
        cout<<c.data[i] << " ";
    }
    cout<<endl;
}

void delete_data(catalog &c) {
    c.num--;
}
