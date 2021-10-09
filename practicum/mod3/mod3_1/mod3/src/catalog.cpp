#include "catalog.h"
//Ditya Athallah
//130194095

void add_data(catalog &c, int x) {
    int num=c.num;
    c.data[num]=x;
    c.num++;
}

void view_data(catalog &c) {

    for(int i = 0; i<c.max; ++i) {
        cout<<c.data[i];
    }

    cout<<endl;
}

int search_data(catalog c, int x) {

    for(int i=0; i<c.max; ++i) {
        if (c.data[i]!=x) {
            return i;
        }
    }

    return -1;
}
