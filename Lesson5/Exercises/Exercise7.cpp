#include <iostream>

typedef unsigned short int u_short;
typedef unsigned long int u_long;

u_long getPower( u_short, u_short );

int main()
{
    u_short base, exponent;
    u_long power;

    std::cout << "Enter a number: ";
    std::cin >> base;
    std::cout << "\nEnter a positive power: ";
    std::cin >> exponent;
    std::cout << std::endl;

    power = getPower( base, exponent );
    if (exponent == 1)
        std::cout << base << " to the " << exponent << "st power is " << power << std::endl;
    else
        std::cout << base << " to the " << exponent << "th power is " << power << std::endl;

    return 0;
}

u_long getPower( u_short base, u_short exponent )
{
    u_long power;

    if ( exponent == 0 )
        power = 1;
    else
        power = base * getPower( base, exponent - 1 );
    
    return power;  
}