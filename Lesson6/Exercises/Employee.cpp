#include <iostream>
#include "Employee.hpp"

Employee::Employee(int age, int yearsOfService, int salary)
{
    this->age = age;
    this->yearsOfService = yearsOfService;
    this->salary = yearsOfService;
}

Employee::Employee()
{
    Employee(0, 0, 0);
}

int Employee::getSalaryToNearestThousand()
{
    return (salary + 500) / 1000;
}

int main()
{
    Employee kevin;
    kevin.setAge(42);
    kevin.setYearsOfService(15);
    kevin.setSalary(95000);

    Employee sam;
    sam.setAge(25);
    sam.setYearsOfService(2);
    sam.setSalary(60000);

    std::cout << "This is Kevin.\n";
    std::cout << "Kevin is " << kevin.getAge() << " years old.\n";
    std::cout << "He has worked here for " << kevin.getYearsOfService() << " years";
    std::cout << " and makes $" << kevin.getSalary() << " per year. \n\n";

    std::cout << "This is Sam.\n";
    std::cout << "Sam is " << sam.getAge() << " years old.\n";
    std::cout << "He has worked here for " << sam.getYearsOfService() << " years";
    std::cout << " and makes $" << sam.getSalary() << " per year. \n\n";

}