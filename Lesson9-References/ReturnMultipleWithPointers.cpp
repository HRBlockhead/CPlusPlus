// Returning multiple values from a function (with pointers)
#include <iostream>


short Factor( int n, int* pSquared, int* pCubed );

int main()
{
    int number, squared, cubed;
    short error;

    std::cout << "Enter a number (0 - 20): ";
    std::cin >> number;

    error = Factor( number, &squared, &cubed );

    if( !error )
    {
        std::cout << "number: " << number << std::endl;
        std::cout << "squared: " << squared << std::endl;
        std::cout << "cubed: " << cubed << std::endl;
    }
    else
        std::cout << "Error occurred!" << std::endl;
}

short Factor( int n, int* pSquared, int* pCubed )
{
    short value = 0;

    if( n > 20 )
        value = 1;
    else
    {
        *pSquared = n * n;
        *pCubed = n * n * n;
    }

    return value;
}