#include "main.h"

void firstNumberC() {

    int x = 5;
    int y = 10;
    int *p1;
    int *p2;

    p1 = &x;
    *p1 = y;
    std::cout <<"p1 = "<< *p1 << "; p2 = " << "null" << "; x = " << x << "; y = " << y << std::endl;

}

