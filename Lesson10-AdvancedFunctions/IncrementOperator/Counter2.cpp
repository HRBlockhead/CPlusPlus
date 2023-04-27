// Listing 10.9 operator++ returns a temporary object
#include <iostream>

class Counter
{
    public:
        Counter();
        ~Counter() {}
        int getVal() const { return val; }
        void setVal( int newVal ) { val = newVal; }
        void Increment() { ++val; }
        Counter operator++();

    private:
        int val;
};

Counter::Counter():
val(0)
{}

Counter Counter::operator++()
{
    ++val;
    Counter temp;
    temp.setVal(val);
    return temp;
}

int main()
{
    Counter ii;
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    ii.Increment();
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    ++ii;
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    Counter a = ++ii;
    std::cout << "The value of a: " << a.getVal();
    std::cout << " and i: " << ii.getVal() << std::endl;
    return 0;
}