#include <iostream>

enum CHOICE { DRAW_RECT = 1, GET_AREA, GET_PERIM, CHANGE_DIMENSIONS, QUIT };

class Rectangle
{
    public:
        // Constructors
        Rectangle( int width, int height );
        ~Rectangle();

        // Overloaded class function DrawShape
        void drawShape() const;
        void drawShape(int width, int height) const;

    private:
        int width;
        int height;
};

// Rectangle constructor
Rectangle::Rectangle( int width, int height )
{
    this->width = width;
    this->height = height;
}

Rectangle::~Rectangle() {}

// Overloaded drawShape - takes no values
// Draws based on current class member values
void Rectangle::drawShape() const
{
    drawShape( width, height );
}

// Overloaded drawShape - takes two values
// Draws based on parameters
void Rectangle::drawShape( int width, int height ) const
{
    for( int i = 0; i < height; i++ )
    {
        for( int j = 0; j < width; j++)
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
    std::cout << "DrawShape(): \n";
    rectangle.drawShape();

    std::cout << "DrawShape( 40, 2 ): \n";
    rectangle.drawShape( 40, 2 );

}

