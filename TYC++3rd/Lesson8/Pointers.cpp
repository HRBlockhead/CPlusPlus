#include <iostream>

int main()
{
    unsigned short int myAge = 5, yourAge = 10;
    unsigned short int * age_p = &myAge;

    std::cout << "myAge:\t" << myAge << "\tyourAge:\t" << yourAge << std::endl;
    std::cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << std::endl;
    std::cout << "age_p:\t" << age_p << std::endl;
    std::cout << "*age_p:\t" << *age_p << std::endl;

    //reassign the pointer
    age_p = &yourAge;
    std::cout << "myAge:\t" << myAge << "\tyourAge:\t" << yourAge << std::endl;
    std::cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << std::endl;
    std::cout << "age_p:\t" << age_p << std::endl;
    std::cout << "*age_p:\t" << *age_p << std::endl;

    return 0;
}