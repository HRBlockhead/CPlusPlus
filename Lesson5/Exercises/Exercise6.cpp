#include <iostream>

int divide( unsigned short, unsigned short );

int main()
{
    unsigned short dividend, divisor;
    int quotient;

    std::cout << "Enter a positive dividend: ";
    std::cin >> dividend;
    std::cout << "\nEnter a positive divisor: ";
    std::cin >> divisor;
    std::cout << std::endl;

    quotient = divide( dividend, divisor );

    if( quotient == -1)
    {
        std::cerr << "Cannot divide by 0!";
    }
    else
    {
        std::cout << "Quotient: " << quotient << std::endl;
    }

    return 0;
}

int divide( unsigned short dividend, unsigned short divisor )
{
    int quotient;
    if ( divisor == 0 )
        quotient = -1;
    else
        quotient = dividend / divisor;
    
    return quotient;
}


