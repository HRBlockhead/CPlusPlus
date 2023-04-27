// Listing 10.5 Copy constructors
#include <iostream>

class Cat
{
    public:
        // Constructors
        Cat();
        Cat( const Cat& );
        ~Cat();
        int getAge() const { return *age; };
        int getWeight() const { return *weight; };
        void setAge( int newAge ){ *age = newAge; };

    private:
        int* age;
        int* weight;
};

Cat::Cat()
{
    age = new int;
    weight = new int;
    *age = 5;
    *weight = 9;
}

Cat::Cat( const Cat& otherCat )
{
    age = new int;
    weight = new int;
    *age = otherCat.getAge();
    *weight = *(otherCat.weight);
}

Cat::~Cat() 
{
    delete age;
    age = 0;
    delete weight;
    weight = 0;
}


//Driver to demonstrate overloaded functions
int main()
{
    Cat frisky;
    std::cout << "frisky's age: " << frisky.getAge() << "\n";

    std::cout << "Setting frisky's age to 6... \n";
    frisky.setAge(6);

    std::cout << "Creating boots from frisky...\n";
    Cat boots(frisky);
    std::cout << "frisky's age: " << frisky.getAge() << "\n";
    std::cout << "boots' age: " << boots.getAge() << "\n";

    std::cout << "Setting frisky's age to 7... \n";
    frisky.setAge(7);
    std::cout << "frisky's age: " << frisky.getAge() << "\n";
    std::cout << "boots' age: " << boots.getAge() << "\n";

    return 0;
}
