#include <iostream>

class Cat
{
    public:
        Cat(int initialAge);
        ~Cat();
        int getAge() const{ return age; }; // inline!
        void setAge(int newAge){ age = newAge; }; // inline!
        void meow() const { std::cout << "Meow.\n"; }; // inline!
    private:
        int age;
};