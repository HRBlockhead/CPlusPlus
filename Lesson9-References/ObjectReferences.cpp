#include <iostream>

class SimpleCat
{
    public:
        SimpleCat( int age, int weight );
        ~SimpleCat() {};

        int getAge() const { return age; }
        int getWeight() const { return weight; }
    private:
        int age;
        int weight;
};    

SimpleCat::SimpleCat( int age, int weight )
{
    this->age = age;
    this->weight = weight;
}

int main()
{
    SimpleCat frisky( 5, 8 );
    SimpleCat& rCat = frisky;

    std::cout << "Frisky is: " << frisky.getAge() << " years old." << std::endl;
    std::cout << "And Frisky weighs: " << rCat.getWeight() << " pounds." << std::endl;
    
    return 0;
}