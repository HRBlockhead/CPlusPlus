//Listing 10.15 Copy Constructors
#include <iostream>

class Cat
{
    public:
        Cat();
        int getAge() const { return *age; }
        int getWeight() const { return *weight; }
        void setAge( int newAge ) { *age = newAge; }
        Cat& operator=(const Cat&);
    
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

Cat& Cat::operator=( const Cat& otherCat )
{
    if( this == &otherCat )
    {
        return *this;
    } 
    else
    {
        *age = otherCat.getAge();
        *weight = otherCat.getWeight();
        return *this;
    }
}

int main()
{
    Cat frisky;
    std::cout << "frisky's age: " << frisky.getAge() << "\n";
    std::cout << "Setting frisky's age to 6... \n";
    frisky.setAge(6);
    Cat whiskers;
    std::cout << "whiskers' age: " << whiskers.getAge() << "\n";
    std::cout << "Copying frisky to whiskers...\n";
    whiskers = frisky;
    std::cout << "whiskers' age: " << whiskers.getAge() << "\n";
    return 0;
}