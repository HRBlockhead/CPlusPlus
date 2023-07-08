// Listing 11.3 Constructors and Destructors

#include <iostream>
enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
    public:
        Mammal();
        ~Mammal();

        // Accessors
        int const getAge(){ return age; }
        void setAge( int newAge ) { age = newAge; }
        int const getWeight() { return weight; }
        void setWeight( int newWeight ){ weight = newWeight; }

        void const speak(){ std::cout << "Mammal sound!\n"; }
        void const sleep(){ std::cout << "Shhhhh, I'm sleeping\n"; }
    
    protected:
        int age;
        int weight;

};

class Dog : public Mammal
{
    public:
        Dog();
        ~Dog();

        // Accessors
        BREED const getBreed(){ return breed; }
        void setBreed( BREED newBreed ){ breed = newBreed; }

        void const wagTail(){ std::cout << "Tail wagging...\n"; };
        void const begForFood(){ std::cout << "Begging for food...\n"; };
    
    private:
        BREED breed;

};

Mammal::Mammal(): age(1), weight(5)
{
    std::cout<< "Mammal constructor..." << std::endl;
}

Mammal::~Mammal()
{
    std::cout<< "Mammal destructor..." << std::endl;
}

Dog::Dog(): breed(GOLDEN)
{
    std::cout<< "Dog constructor..." << std::endl;
}

Dog::~Dog()
{
    std::cout<< "Dog destructor..." << std::endl;
}

int main()
{
    Dog fido;
    fido.speak();
    fido.wagTail();
    std::cout << "Fido is " << fido.getAge() << " years old!\n";
}