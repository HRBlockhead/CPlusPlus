// Listing 10.2 Default values in member functions
#include <iostream>

class Rectangle
{
    public:
        // Constructors
        Rectangle( int width, int height );
        ~Rectangle();

        // Overloaded class function DrawShape
        void drawShape() const;
        void drawShape( int width, int height, bool useCurrentVals = false ) const;

    private:
        int width;
        int height;
};

// Rectangle constructor
Rectangle::Rectangle( int width, int height ) :
width(width),
height(height)
{}

Rectangle::~Rectangle() {}

// Overloaded drawShape - takes no values
// Draws based on current class member values
void Rectangle::drawShape() const
{
    drawShape( width, height );
}

// default value used for third parameter
void Rectangle::drawShape( int width, int height, bool useCurrentValue ) const
{
    int printHeight, printWidth;

    if( useCurrentValue )
    {
        printHeight = this->height;
        printWidth = this->width;
    }
    else
    {
        printHeight = height;
        printWidth = width;
    }


    for( int i = 0; i < printHeight; i++ )
    {
        for( int j = 0; j < printWidth; j++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}

//Driver to demonstrate overloaded functions
int main()
{
    Rectangle rectangle( 30, 5 );
    std::cout << "DrawShape(0, 0, true): \n";
    rectangle.drawShape(0, 0, true);

    std::cout << "DrawShape( 40, 2 ): \n";
    rectangle.drawShape( 40, 2 );

    return 0;
}