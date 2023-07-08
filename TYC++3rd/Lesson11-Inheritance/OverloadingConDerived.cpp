// Listing 11.4 Overloading constructors in derived classes

#include <iostream>
enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
    public:
        Mammal();
        Mammal( int age );
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
        Dog( int age );
        Dog( int age, int weight );
        Dog( int age, BREED breed );
        Dog( int age, int weight, BREED breed );
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

Mammal::Mammal( int age ): age( age ), weight(5)
{
    std::cout<< "Mammal(int) constructor..." << std::endl;
}

Mammal::~Mammal()
{
    std::cout<< "Mammal destructor..." << std::endl;
}

Dog::Dog(): Mammal(), breed(GOLDEN)
{
    std::cout<< "Dog constructor..." << std::endl;
}

Dog::Dog( int age ): Mammal( age ), breed(GOLDEN)
{
    std::cout<< "Dog(int) constructor..." << std::endl;
}

Dog::Dog( int age, int weight ): Mammal( age ), breed(GOLDEN)
{
    this->weight = weight;
    std::cout<< "Dog(int, int) constructor..." << std::endl;
}

Dog::Dog( int age, int weight, BREED breed ): Mammal( age ), breed(breed)
{
    this->weight = weight;
    std::cout<< "Dog(int, int, BREED) constructor..." << std::endl;
}

Dog::Dog( int age, BREED breed ): Mammal( age ), breed(breed)
{
    std::cout<< "Dog(int, BREED) constructor..." << std::endl;
}

Dog::~Dog()
{
    std::cout<< "Dog destructor..." << std::endl;
}

int main()
{
    Dog fido;
    Dog rover( 5 );
    Dog buster( 6, 8 );
    Dog goldie( 3, GOLDEN );
    Dog dobbie( 4, 20, DOBERMAN );

    fido.speak();
    rover.wagTail();
    std::cout << "Goldie is " << goldie.getAge() << " years old!\n";
    std::cout << "Dobbie weighs " << goldie.getWeight() << " pounds!\n";
    return 0;
}