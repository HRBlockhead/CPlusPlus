#include <iostream>
#include "Cat.hpp"

/*********************************************************************************************
 * Constructor
 * parameters: 
 *  int age - The age of the cat
 *********************************************************************************************/
Cat::Cat(int initialAge)
{
    age = initialAge;
}

/*********************************************************************************************
 * Destructor
 * (Does nothing)
 *********************************************************************************************/
Cat::~Cat()
{
}

int main()
{
    Cat frisky(5);
    frisky.meow();
    std::cout << "Frisky is a cat who is ";
    std::cout << frisky.getAge() << " years old.\n";
    frisky.meow();

    frisky.setAge(7);
    std::cout << "Now Frisky is ";
    std::cout << frisky.getAge() << " years old.\n";
    return 0;
}


