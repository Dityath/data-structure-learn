#include "main.h"

void firstNumberA() {

    int x = 5;
    int y = 10;
    int *p1;
    int *p2;

    p1 = &y;
    p2 = &x;
    *p1 = *p2;

    std::cout << "p1 = " << *p1 << "; p2 = " << *p2 << "; x = " << x << "; y = " << y << std::endl;

}
