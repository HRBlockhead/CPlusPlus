// Resolving Memory Leaks
#include <iostream>

class SimpleCat
{
    public:
        SimpleCat( int age, int weight );
        ~SimpleCat() {}

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

SimpleCat& theFunction();

int main()
{
    SimpleCat& rCat = theFunction();
    int age = rCat.getAge();
    std::cout << "rCat is " << age << " years old!\n";
    std::cout << "&rCat: " << &rCat << std::endl;
    // How to get rid of that memory?
    SimpleCat* pCat = &rCat;
    delete pCat;
    // But what does rCat refer to?
    return 0;
}

SimpleCat& theFunction()
{
    SimpleCat* pFrisky = new SimpleCat(5, 9);
    std::cout << "pFrisky: " << pFrisky << std::endl;
    return *pFrisky;
}