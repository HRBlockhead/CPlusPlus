// Listing 10.12 uses both pre- and postfix operators
#include <iostream>

class Counter
{
    public:
        Counter();
        Counter( int val );
        ~Counter() {}
        int getVal() const { return val; }
        void setVal( int newVal ) { val = newVal; }
        const Counter& operator++(); //prefix
        const Counter operator++(int); //postfix


    private:
        int val;
};

Counter::Counter():
val(0)
{}

Counter::Counter( int val ):
val(val)
{}

const Counter& Counter::operator++()
{
    ++val;
    return *this;
}

const Counter Counter::operator++( int x )
{
    Counter temp(*this);
    ++val;
    return temp;
}

int main()
{
    Counter ii;
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    ii++;
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    ++ii;
    std::cout << "The value of ii is " << ii.getVal() << std::endl;
    Counter a = ++ii;
    std::cout << "The value of a: " << a.getVal();
    std::cout << " and i: " << ii.getVal() << std::endl;
    a = ii++;
    std::cout << "The value of a: " << a.getVal();
    std::cout << " and i: " << ii.getVal() << std::endl;
    return 0;
}