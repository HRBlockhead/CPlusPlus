// Creating objects on the free store

#include <iostream>

class SimpleCat
{
    public:
        SimpleCat();
        ~SimpleCat();
    private:
        int age;
};

SimpleCat::SimpleCat()
{
    std::cout << "Constructor called." << std::endl;
    age = 1;
}

SimpleCat::~SimpleCat()
{
    std::cout << "Destructor called." << std::endl;
}

int main()
{
    std::cout << "SimpleCat Frisky..." << std::endl;
    SimpleCat Frisky;
    
    std::cout << "SimpleCat Rags_p = new SimpleCat..." << std::endl;
    SimpleCat* Rags_p = new SimpleCat;

    std::cout << "delete Rags_p..." << std::endl;
    delete Rags_p;

    std::cout << "Exiting, watch Frisky go..." << std::endl;
}