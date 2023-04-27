// Exercises 1-8
#include <iostream>

class Circle
{
    public:
        Circle();
        Circle( int );
        Circle( Circle& );
        ~Circle();
        int getRadius() { return *radius_p; }
        void setRadius( int newRadius ) { *radius_p = newRadius; }
        const Circle& operator++(); //prefix
        const Circle operator++( int ); //postfix
        const Circle& operator=( Circle& );
    
    private:
        int* radius_p;
};

Circle::Circle()
{
    radius_p = new int( 5 );
}

Circle::Circle( int initialRadius ):
{
    radius_p = new int( initialRadius );
}

Circle::Circle(Circle& otherCircle)
{
    radius_p = new int( otherCircle.getRadius() );
}

// Prefix
const Circle& Circle::operator++()
{
    *radius_p++;
    return *this;
}

// Postfix
const Circle Circle::operator++(int x)
{
    Circle temp(*radius_p);
    *radius_p++;
    return temp;
}

const Circle& Circle::operator=( Circle& otherCircle )
{
    if( this == &otherCircle )
    {
        return *this;
    }
    radius_p = new int( otherCircle.getRadius() );
    return *this;
}

int main()
{
    Circle circle1;
    Circle circle2(9);

    circle1++;
    circle2++;
    std::cout << "circle1: " << circle1.getRadius() << std::endl;
    std::cout << "circle2: " << circle2.getRadius() << std::endl;

    circle1 = circle2;
    std::cout << "circle1: " << circle1.getRadius() << std::endl;
    std::cout << "circle2: " << circle2.getRadius() << std::endl;

    return 0;
}



