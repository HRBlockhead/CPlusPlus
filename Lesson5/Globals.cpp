#include <iostream>

void myFunction();

int x = 5, y = 7;

int main()
{
    std::cout << "x from main: " << x << std::endl;
    std::cout << "y from main: " << y << "\n\n";

    myFunction();

    std::cout << "Back from myFunction()\n\n";

    std::cout << "x from main: " << x << std::endl;
    std::cout << "y from main: " << y << "\n\n";

    return 0;
}

void myFunction()
{
    int y = 10;

    std::cout << "x from myFunction: " << x << std::endl;
    // y will be 10 here because the local variable hides the global
    std::cout << "y from myFunction: " << y << "\n\n"; 
}
    