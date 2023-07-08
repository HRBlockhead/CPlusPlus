// Listing 11.1 Simple Inheritance

#include <iostream>
enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
    public:
        Mammal();
        ~Mammal();

        // Accessors
        int const getAge();
        void setAge( int );
        int const getWeight();
        void setWeight( int );

        void const speak();
        void const sleep();
    
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
        BREED const getBreed();
        void setBreed( BREED );

        void const wagTail();
        void const begForFood();

}
