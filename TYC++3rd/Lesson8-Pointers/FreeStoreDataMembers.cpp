// Accessing data members of objects on the heap

#include <iostream>

class SimpleCat
{
    public:
        SimpleCat() { age = 2; }
        SimpleCat( int age );
        ~SimpleCat();

        int getAge() const { return age; }
        void setAge( int newAge ) { age = newAge; }
    private:
        int age;
};    

SimpleCat::SimpleCat( int age )
{
    this->age = age;
}

SimpleCat::~SimpleCat()
{}

int main()
{
    SimpleCat* frisky = new SimpleCat(2);

    
    std::cout << "SimpleCat pRags = new SimpleCat..." << std::endl;
    SimpleCat* pRags = new SimpleCat;

    std::cout << "delete pRags..." << std::endl;
    delete pRags;

    std::cout << "Exiting, watch Frisky go..." << std::endl;
}