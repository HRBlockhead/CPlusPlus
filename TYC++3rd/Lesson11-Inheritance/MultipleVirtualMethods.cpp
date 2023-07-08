// Listing 11.9 Multiple virtual methods called in turn
#include <iostream>

class Mammal
{
    public:
        Mammal(): age(1){}
        virtual ~Mammal(){ std::cout<< "Mammal destructor..." << std::endl; }


        virtual void const speak(){ std::cout << "Mammal sound!\n"; }
        void const move(){ std::cout << "Mammal move one step\n"; }
    
    protected:
        int age;
};

class Dog : public Mammal
{
    public:
        void const speak(){ std::cout << "Woof!\n"; }
};

class Cat : public Mammal
{
    public:
        void const speak(){ std::cout << "Meow!\n"; }
};

class Horse : public Mammal
{
    public:
        void const speak(){ std::cout << "Whinny!\n"; }
};

class Pig : public Mammal
{
    public:
        void const speak(){ std::cout << "Oink!\n"; }
};

int main()
{
    Mammal* animals[5];
    Mammal* mammal_p;
    int choice, ii;
    for( ii = 0; ii < 5; ++ii )
    {
        std::cout << "(1)dog (2)cat (3)horse (4)pig ";
        std::cin >> choice;
        switch( choice )
        {
            case 1: mammal_p = new Dog();
            break;
            case 2: mammal_p = new Cat();
            break;
            case 3: mammal_p = new Horse();
            break;
            case 4: mammal_p = new Pig();
            break;
            default: mammal_p = new Mammal();
            break;
        }
        animals[ii] = mammal_p;
    }

    for( ii = 0; ii < 5; ii++ )
    {
        animals[ii]->speak();
    }

    return 0;
}