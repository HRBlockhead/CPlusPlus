#include <iostream>

int main()
{
    int a = 1, b = 1, c;
    if ( c = (a - b) ) // This line will never run because c will always equal 0
        std::cout << "The value of c is: " << c;
    return 0;
}