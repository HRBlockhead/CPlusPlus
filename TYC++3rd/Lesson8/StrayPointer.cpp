// Demonstrates a stray pointer
#include<iostream>

typedef unsigned short int ushort;

int main()
{
    ushort* p_int = new ushort;
    *p_int = 10;
    std::cout << "*p_int: " << *p_int << std::endl;
    delete p_int;

    long* p_long = new long;
    *p_long = 90000;
    std::cout << "*p_long: " << *p_long << std::endl;

    // Uh oh, this was deleted!!
    // Might result in "stomping on the pointer"
    *p_int = 20;

    

    std::cout << "*p_int: " << *p_int << std::endl;
    std::cout << "*p_long: " << *p_long << std::endl;
    delete p_long;

    return 0;
}