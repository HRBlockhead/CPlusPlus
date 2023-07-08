// Listing 11.10 Data slicing when passing by value
#include <iostream>

class Mammal
{
    public:
        Mammal(): age(1){}
        virtual ~Mammal(){}
        
        virtual void const speak(){ std::cout << "Mammal sound!\n"; }

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

int main()
{
    Mammal* mammal_p = 0;
    int choice;
    
    while( 1 )
    {
        bool quit = false;
        std::cout << "(1)dog (2)cat (0)quit: ";
        std::cin >> choice;
        switch( choice )
        {
            case 0: quit = true;
            break;
            case 1: mammal_p = new Dog();
            break;
            case 2: mammal_p = new Cat();
            break;
            default: mammal_p = new Mammal();
            break;
        }

        if( quit ) break;
        ptrFunction( mammal_p );
        refFunction( *mammal_p );
        valueFunction( *mammal_p );
    }

    return 0;
}
