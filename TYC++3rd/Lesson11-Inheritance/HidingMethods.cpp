// Listing 11.6 Hiding methods
#include <iostream>

class Mammal
{
    public:
        Mammal(){ std::cout<< "Mammal constructor..." << std::endl; }
        ~Mammal(){ std::cout<< "Mammal destructor..." << std::endl; }


        void const speak(){ std::cout << "Mammal sound!\n"; }
        void const sleep(){ std::cout << "Shhhhh, I'm sleeping\n"; }
        void const move(){ std::cout << "Mammal move one step\n"; }
        void const move( int distance ){ std::cout << "Mammal move " << distance << " steps\n"; }
    
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
        void const move(){ std::cout << "Dog move five steps\n"; }
};

int main()
{
    Mammal bigMammal;
    Dog fido;
    bigMammal.move();
    bigMammal.move(2);
    fido.move();
    // The move(int) method has been "hidden." Once you override any overloaded method, all the
    // other overloads will be unavailable 
    // fido.move(2);
    return 0;
}