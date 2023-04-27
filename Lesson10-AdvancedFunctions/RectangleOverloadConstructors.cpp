// Listing 10.3 Overlaoding constructors
#include <iostream>

class Rectangle
{
    public:
        // Constructors
        Rectangle();
        Rectangle( int width, int height );
        ~Rectangle();

        int getWidth() const { return width; }
        int getHeight() const { return height; }

    private:
        int width;
        int height;
};

Rectangle::Rectangle()
{
    width = 5;
    height = 10;
}

// Rectangle constructor
Rectangle::Rectangle( int width, int height )
{
    this->width = width;
    this->height = height;
}

Rectangle::~Rectangle() {}


//Driver to demonstrate overloaded functions
int main()
{
    Rectangle rect1;
    std::cout << "rect1 width: " << rect1.getWidth() << "\n";
    std::cout << "rect1 height: " << rect1.getHeight() << "\n\n";


    int userWidth, userHeight;
    std::cout << "Enter a width: ";
    std::cin >> userWidth;
    std::cout << "Enter a height: ";
    std::cin >> userHeight;

    Rectangle rect2;
    std::cout << "\nrect2 width: " << rect1.getWidth() << "\n";
    std::cout << "rect2 height: " << rect1.getHeight() << "\n\n";
    std::cout << "DrawShape( 40, 2 ): \n";


}

