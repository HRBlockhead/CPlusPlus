// Passing pointers to objects
#include <iostream>

class SimpleCat
{
    public:
        SimpleCat();
        SimpleCat( SimpleCat& );
        ~SimpleCat();

        int getAge() const { return age; }
        void setAge( int age ) { this->age = age; }
    private:
        int age;
};

SimpleCat::SimpleCat()
{
    std::cout << "Simple Cat Constructor...\n";
    age = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    std::cout << "Simple Copy Cat Constructor...\n";
}

SimpleCat::~SimpleCat()
{
    std::cout << "Simple Cat Destructor...\n";
}

const SimpleCat* const FunctionTwo( const SimpleCat* const pTheCat );

int main()
{
    std::cout << "Making a cat...\n";
    SimpleCat frisky;
    std::cout << "Frisky is " << frisky.getAge() << " years old\n";

    int age = 5;
    frisky.setAge(age);
    std::cout << "Frisky is " << frisky.getAge() << " years old\n";

    std::cout << "Calling FunctionTwo...\n";
    FunctionTwo( &frisky );
    std::cout << "Frisky is " << frisky.getAge() << " years old\n";

    return 0;
}

const SimpleCat* const FunctionTwo( const SimpleCat* const pTheCat )
{
    std::cout << "FunctionTwo. Returning...\n";
    std::cout << "Frisky is now " << pTheCat->getAge()  << " years old\n";
    // Illegal line, as pTheCat points to a constant cat
    // pTheCat->setAge(8); 
    return pTheCat;
}