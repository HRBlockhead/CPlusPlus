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

int main()
{
    SimpleCat * frisky = new SimpleCat(2);

    
    std::cout << "SimpleCat Rags_p = new SimpleCat..." << std::endl;
    SimpleCat* Rags_p = new SimpleCat;

    std::cout << "delete Rags_p..." << std::endl;
    delete Rags_p;

    std::cout << "Exiting, watch Frisky go..." << std::endl;
}