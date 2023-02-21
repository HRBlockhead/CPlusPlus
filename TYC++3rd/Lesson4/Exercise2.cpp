#include <iostream>

int main()
{
    
    int x,y,z;
    std::cout << "Please enter 3 numbers.\n";
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    std::cout << "z: ";
    std::cin >> z;
    std::cout << std::endl;

    if( z = (x-y) ) // Is an assignment, not a comparison so it will run when x-y != 0 
    {
        std::cout << "x: " << x;
        std::cout << " minus y: " << y;
        std::cout << " equals z: " << z;

    }
    else
        std::cout << "x-y does not equal z";
    
    return 0;

}