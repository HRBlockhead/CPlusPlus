// Returning multiple values from a function (with references)
// Also uses a simple ERROR
#include <iostream>

typedef unsigned short ushort;
enum ERR_CODE { SUCCESS, ERROR }; 

ERR_CODE Factor( ushort n, ushort& pSquared, ushort& pCubed );

int main()
{
    ushort number, squared, cubed;
    ERR_CODE result;

    std::cout << "Enter a number (0 - 20): ";
    std::cin >> number;

    result = Factor( number, squared, cubed );

    if( result == SUCCESS )
    {
        std::cout << "number: " << number << std::endl;
        std::cout << "squared: " << squared << std::endl;
        std::cout << "cubed: " << cubed << std::endl;
    }
    else
        std::cout << "Error occurred!" << std::endl;
}

ERR_CODE Factor( ushort n, ushort& rSquared, ushort& rCubed )
{
    ERR_CODE result = SUCCESS;

    if( n > 20 )
        result = ERROR;
    else
    {
        rSquared = n * n;
        rCubed = n * n * n;
    }

    return result;
}