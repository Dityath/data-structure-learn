#include "main.h"

void secondNumber() {
    int a;
    int b;
    int c;
    int *p1;
    int *p2;
    int *p3;

    a = 10;
    b = 15;
    c = 27;
    std::cout << "baris ke 1, 2, 3" << std::endl;
    std::cout << "a = "<< a << "; b = "<< b << "; c = "<< c<<"; *p1 = "<< "null" <<"; *p2 = "<< "null"<<"; *p3 = "<< "null" << std::endl;
    std::cout << "" << std::endl;

    p1 = &a;
    std::cout << "baris ke 4" << std::endl;
    std::cout << "a = "<< a<< "; b = "<< b << "; c = "<< c<<"; *p1 = "<< *p1<<"; *p2 = "<< "null"<<"; *p3 = "<< "null" << std::endl;
    std::cout << "" << std::endl;

    p2 = &b;
    std::cout << "baris ke 5" << std::endl;
    std::cout << "a = "<< a << "; b = "<< b << "; c = "<< c<<"; *p1 = "<< *p1 <<"; *p2 = "<< *p2 <<"; *p3 = "<< "null" << std::endl;
    std::cout << "" << std::endl;

    *p1 = c;
    std::cout << "baris ke 6" << std::endl;
    std::cout << "a = "<< a << "; b = "<< b << "; c = "<< c<<"; *p1 = "<< *p1 <<"; *p2 = "<< *p2 <<"; *p3 = "<< "null" << std::endl;
    std::cout << "" << std::endl;

    a = *p2;
    std::cout << "baris ke 7" << std::endl;
    std::cout << "a = "<< a << "; b = "<< b << "; c = "<< c<<"; *p1 = "<< *p1 <<"; *p2 = "<< *p2 <<"; *p3 = "<< "null" << std::endl;
    std::cout << "" << std::endl;

    b = 6;
    std::cout << "baris ke 8" << std::endl;
    std::cout << "a = "<< a << "; b = "<< b << "; c = "<< c<<"; *p1 = "<< *p1 <<"; *p2 = "<< *p2 <<"; *p3 = "<< "null" << std::endl;
    std::cout << "" << std::endl;

    p3 = &b;
    std::cout << "baris ke 9" << std::endl;
    std::cout << "a = "<< a << "; b = "<< b << "; c = "<< c<<"; *p1 = "<< *p1 <<"; *p2 = "<< *p2 <<"; *p3 = "<< *p3 << std::endl;
    std::cout << "" << std::endl;

    p3 = &c;
    std::cout << "baris ke 10" << std::endl;
    std::cout << "a = "<< a << "; b = "<< b << "; c = "<< c<<"; *p1 = "<< *p1 <<"; *p2 = "<< *p2 <<"; *p3 = "<< *p3 << std::endl;
    std::cout << "" << std::endl;

    *p1 = *p3;
    std::cout << "baris ke 11" << std::endl;
    std::cout << "a = "<< a << "; b = "<< b << "; c = "<< c<<"; *p1 = "<< *p1 <<"; *p2 = "<< *p2 <<"; *p3 = "<< *p3 << std::endl;
    std::cout << "" << std::endl;
}

