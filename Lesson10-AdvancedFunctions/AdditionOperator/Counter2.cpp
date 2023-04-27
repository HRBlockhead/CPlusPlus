// Listing 10.13 Overload operator plus(+)
#include <iostream>

class Counter
{
    public:
        Counter();
        Counter( int initialValue );
        ~Counter() {}
        int getValue() const { return value; }
        void setValue( int newVal ) { value = newVal; }
        Counter operator+( const Counter& );

    private:
        int value;
};

Counter::Counter( int initialValue ):
value(initialValue)
{}

Counter::Counter():
value(0)
{}

Counter Counter::operator+( const Counter& otherCounter )
{
    return Counter( value + otherCounter.getValue() );
} 

int main()
{
    Counter counter1(2), counter2(4), counter3;
    counter3 = counter1 + counter2;
    
    std::cout << "counter1: " << counter1.getValue() << std::endl;
    std::cout << "counter2: " << counter2.getValue() << std::endl;
    std::cout << "counter3: " << counter3.getValue() << std::endl;

    return 0;

}