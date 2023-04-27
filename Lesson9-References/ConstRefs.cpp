// Passing references to objects
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

SimpleCat::SimpleCat( SimpleCat& )
{
    std::cout << "Simple Copy Cat Constructor...\n";
}

SimpleCat::~SimpleCat()
{
    std::cout << "Simple Cat Destructor...\n";
}

const SimpleCat& FunctionTwo( const SimpleCat& rTheCat );

int main()
{
    std::cout << "Making a cat...\n";
    SimpleCat frisky;
    std::cout << "Frisky is " << frisky.getAge() << " years old\n";

    int age = 5;
    frisky.setAge(age);
    std::cout << "Frisky is " << frisky.getAge() << " years old\n";

    std::cout << "Calling FunctionTwo...\n";
    FunctionTwo( frisky );
    std::cout << "Frisky is " << frisky.getAge() << " years old\n";

    return 0;
}

const SimpleCat& FunctionTwo( const SimpleCat& rTheCat )
{
    std::cout << "FunctionTwo. Returning...\n";
    std::cout << "Frisky is now " << rTheCat.getAge()  << " years old\n";
    // Illegal line, as rTheCat is a constant SimpleCat
    // pTheCat->setAge(8); 
    return rTheCat;
}
