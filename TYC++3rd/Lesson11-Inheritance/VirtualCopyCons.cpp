// Listing 11.11 Virtual Copy Constructor
#include <iostream>

class Mammal
{
    public:
        Mammal(): age(1){ std::cout << "Mammal Constructor...\n"; }
        virtual ~Mammal() { std::cout << "Mammal Destructor...\n"; }
        Mammal( const Mammal& otherMammal );
        
        virtual void const speak(){ std::cout << "Mammal sound!\n"; }
        virtual Mammal* clone() { return new Mammal( *this ); }

        int getAge() const { return age; }

    protected:
        int age;
};

Mammal::Mammal( const Mammal& otherMammal) : age( otherMammal.getAge() )
{
    std::cout << "Mammal copy constructor...\n";
}

class Dog : public Mammal
{
    public:
        Dog() { std::cout << "Dog constructor...\n"; }
        virtual ~Dog() { std::cout << "Dog destructor...\n"; }
        Dog( const Dog& otherDog );
        
        virtual void speak() const { std::cout << "Woof!\n"; }
        virtual Mammal* clone() { return new Dog( *this ); }
};

Dog::Dog( const Dog& otherDog ) : Mammal( otherDog )
{
    std::cout << "Dog copy constructor...\n";
}

class Cat : public Mammal
{
    public:
        Cat() { std::cout << "Cat constructor...\n"; }
        virtual ~Cat() { std::cout << "Cat destructor...\n"; }
        Cat( const Cat& otherDog );

        virtual void const speak(){ std::cout << "Meow!\n"; }
        virtual Mammal* clone() { return new Cat( *this ); }
};

Cat::Cat( const Cat& otherCat ) : Mammal( otherCat )
{
    std::cout << "Cat copy constructor...\n";
}

enum ANIMALS { MAMMAL, DOG, CAT };
const int NUM_ANIMAL_TYPES = 3;
int main()
{
    Mammal* animals[NUM_ANIMAL_TYPES];
    Mammal* mammal_p;
    int choice;
    for( int ii = 0; ii < NUM_ANIMAL_TYPES; ++ii )
    {
        std::cout << "(1)dog (2)cat (3)mammal: ";
        std::cin >> choice;
        switch( choice )
        {
            case 1: mammal_p = new Dog();
            break;
            case 2: mammal_p = new Cat();
            break;
            case 3: mammal_p = new Mammal();
            break;
        }
        animals[ii] = mammal_p;
    }

    Mammal* otherAnimals[NUM_ANIMAL_TYPES];
    for( int ii = 0; ii < NUM_ANIMAL_TYPES; ++ii )
    {
        animals[ii]->speak();
        otherAnimals[ii] = animals[ii]->clone();
    }
    for( int ii = 0; ii < NUM_ANIMAL_TYPES; ++ii )
    {
        otherAnimals[ii]->speak();
    }

    return 0;
}
