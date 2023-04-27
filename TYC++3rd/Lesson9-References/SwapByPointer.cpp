// Passing by references (using pointers)
#include <iostream>

void swap( int* x, int* y );

int main()
{
    int x = 5, y = 10;
    
    std::cout << "Main. Before swap, x: " << x << " y: " << y << std::endl;
    swap( &x, &y );
    std::cout << "Main. After swap, x: " << x << " y: " << y << std::endl;

    return 0;
}

void swap( int* pX, int* pY )
{
    int temp;

     std::cout << "Swap. Before swap, *pX: " << *pX << " *pY: " << *pY << std::endl;
    temp = *pX;
    *pX = *pY;
    *pY = temp;
    std::cout << "Swap. After swap, *pX: " << *pX << " *pY: " << *pY << std::endl;
}