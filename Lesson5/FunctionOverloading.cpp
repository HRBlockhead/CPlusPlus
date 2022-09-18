#include <iostream>

int Double( int );
long Double( long );
float Double( float );
double Double( double );

int main()
{
    int myInt = 6500;
    long myLong = 65000;
    float myFloat = 6.5F;
    double myDouble = 6.5e20;

    int doubledInt;
    long doubledLong;
    float doubledFloat;
    double doubledDouble;

    std::cout << "myInt: " << myInt << std::endl;
    std::cout << "myLong: " << myLong << std::endl;
    std::cout << "myFloat: " << myFloat << std::endl;
    std::cout << "myDouble: " << myDouble << std::endl;

    doubledInt = Double( myInt );
    doubledLong = Double( myLong );
    doubledFloat = Double( myFloat );
    doubledDouble = Double( myDouble );

    std::cout << "doubledInt: " << doubledInt << std::endl;
    std::cout << "doubledLong: " << doubledLong << std::endl;
    std::cout << "doubledFloat: " << doubledFloat << std::endl;
    std::cout << "doubledDouble: " << doubledDouble << std::endl;

    return 0;
}

int Double( int original )
{
    std::cout << "In Double(int)" << std::endl;
    return 2 * original;
}

long Double( long original )
{
    std::cout << "In Double(long)" << std::endl;
    return 2 * original;
}

float Double( float original )
{
    std::cout << "In Double(float)" << std::endl;
    return 2 * original;
}

double Double( double original )
{
    std::cout << "In Double(double)" << std::endl;
    return 2 * original;
}