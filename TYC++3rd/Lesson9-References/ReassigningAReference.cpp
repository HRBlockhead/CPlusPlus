// Demonstrating reassignment of references
#include <iostream>

int main()
{
    int intOne;
    int&  rSomeRef = intOne;

    intOne = 5; 
    std::cout << "intOne: " << intOne << std::endl;
    std::cout << "rSomeRef: " << rSomeRef << std::endl;
    std::cout << "&intOne: " << &intOne << std::endl;
    std::cout << "&rSomeRef: " << &rSomeRef << std::endl;

    int intTwo = 8;

    // This doesn't do what you think!!
    // Equivalent to intOne = intTwo
    rSomeRef = intTwo; 
    std::cout << "intOne: " << intOne << std::endl;
    std::cout << "intTwo: " << intTwo << std::endl;
    std::cout << "rSomeRef: " << rSomeRef << std::endl;
    std::cout << "&intOne: " << &intOne << std::endl;
    std::cout << "&intTwo: " << &intTwo << std::endl;
    std::cout << "&rSomeRef: " << &rSomeRef << std::endl;

    return 0;
}