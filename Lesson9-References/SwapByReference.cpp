// Passing by references (using references)
#include <iostream>

void swap( int& rX, int& rY );

int main()
{
    int x = 5, y = 10;
    
    std::cout << "Main. Before swap, x: " << x << " y: " << y << std::endl;
    swap( x, y );
    std::cout << "Main. After swap, x: " << x << " y: " << y << std::endl;

    return 0;
}

void swap( int& rX, int& rY )
{
    int temp;

     std::cout << "Swap. Before swap, rX: " << rX << " rY: " << rY    << std::endl;
    temp = rX;
    rX = rY;
    rY = temp;
    std::cout << "Swap. After swap, rX: " << rX << " rY: " << rY << std::endl;
}