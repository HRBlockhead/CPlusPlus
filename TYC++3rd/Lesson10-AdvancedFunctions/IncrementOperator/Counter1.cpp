// Listing 10.8 The counter class
#include <iostream>

class Counter
{
    public:
        Counter();
        ~Counter() {}
        int getVal() const { return val; }
        void setVal( int newVal ) { val = newVal; }
        void Increment() { ++val; }
        void operator++() { ++val; }

    private:
        int val;
};

Counter::Counter():
val(0)
{}

int main()
{
    Counter ii;
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    ii.Increment();
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    ++ii;
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    return 0;
}