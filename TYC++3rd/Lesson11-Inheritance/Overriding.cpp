// Listing 11.5 Overriding a base class

#include <iostream>
enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
    public:
        Mammal(){ std::cout<< "Mammal constructor..." << std::endl; }
        ~Mammal(){ std::cout<< "Mammal destructor..." << std::endl; }

        void const speak(){ std::cout << "Mammal sound!\n"; }
        void const sleep(){ std::cout << "Shhhhh, I'm sleeping\n"; }
    
    protected:
        int age;
        int weight;
};

class Dog : public Mammal
{
    public:
        Dog(){ std::cout<< "Dog constructor..." << std::endl; }
        ~Dog(){ std::cout<< "Dog destructor..." << std::endl; };

        void const wagTail(){ std::cout << "Tail wagging...\n"; };
        void const begForFood(){ std::cout << "Begging for food...\n"; };
        void const speak(){ std::cout << "Woof!\n"; }
    
    private:
        BREED breed;
};

int main()
{
    Mammal bigMammal;
    Dog fido;
    bigMammal.speak();
    fido.speak();
    return 0;
}