// Listing 11.8 Using virtual methods
#include <iostream>

class Mammal
{
    public:
        Mammal(): age(1){ std::cout<< "Mammal constructor..." << std::endl; }
        virtual ~Mammal(){ std::cout<< "Mammal destructor..." << std::endl; }


        virtual void const speak(){ std::cout << "Mammal sound!\n"; }
        void const move(){ std::cout << "Mammal move one step\n"; }
    
    protected:
        int age;
};

class Dog : public Mammal
{
    public:
        Dog(){ std::cout<< "Dog constructor..." << std::endl; }
        virtual ~Dog(){ std::cout<< "Dog destructor..." << std::endl; };

        void const wagTail(){ std::cout << "Tail wagging...\n"; };
        void const speak(){ std::cout << "Woof!\n"; }
        void const move(){ std::cout << "Dog move five steps\n"; }
};

int main()
{
    Mammal* dog_p = new Dog();
    dog_p->move();
    dog_p->speak();

    return 0;
}