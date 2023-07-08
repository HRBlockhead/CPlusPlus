// Listing 11.7 Calling base method from overridden method
#include <iostream>

class Mammal
{
    public:
        void const move(){ std::cout << "Mammal move one step\n"; }
        void const move( int distance ){ std::cout << "Mammal move " << distance << " steps\n"; }
    
    protected:
        int age;
        int weight;
};

class Dog : public Mammal
{
    public:
        void const move();
};

void const Dog::move()
{
    std::cout << "In dog move...\n";
    Mammal::move(3);
}



int main()
{
    Mammal bigMammal;
    Dog fido;
    bigMammal.move(2);
    fido.move();
    fido.Mammal::move(6);
    return 0;
}