#include <iostream>

void myFunction();

int main()
{
    int x = 5;
    std::cout << "In main x is: " << x;

    myFunction();

    std::cout << "\nBack in main, x is: " << x;

    return 0;
}

void myFunction()
{
    int x = 8;
    std::cout << "\nIn myFunc, local x: " << x;

    {
        std::cout << "\nIn block in myFunc, local x: " << x;

        int x = 9;

        std::cout << "\nVery local x: " << x;
    }

    std::cout << "\nOut of block, in myFunc, local x: " << x;
}