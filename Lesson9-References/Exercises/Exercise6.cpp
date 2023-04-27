// Write a program that produces a memory leak.
// Exercise 7: Fix it!
#include <iostream>

int* funcOne();

int main()
{
    int* pInt = funcOne();
    std::cout << "The value of pInt in main is: " << *pInt << std::endl;
    std::cout << "The address of pInt in main is: " << pInt << std::endl;
    return 0;
}

int* funcOne()
{
    int* pInt = new int (5);
    std::cout << "The value of pInt in funcOne() is: " << *pInt << std::endl;
    std::cout << "The address of pInt in funcOne() is: " << pInt << std::endl;
    return pInt;
}

__cplus