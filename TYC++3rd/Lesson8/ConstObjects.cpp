// Using pointers with const methods
#include<iostream>

class Rectangle
{
    public:
        Rectangle();
        ~Rectangle();

        int getLength() const { return length; }
        void setLength( int newLength ) { length = newLength; }

        int getWidth() const { return width; }
        void setWidth( int newWidth ) { width = newWidth; }
    
    private:
        int length;
        int width;
};

Rectangle::Rectangle()
{
    width = 5;
    length = 10;
}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle* p_rect = new Rectangle;
    const Rectangle * p_constRect = new Rectangle;
    Rectangle * const p_constPtr = new Rectangle;

    std::cout << "p_rect width: " << p_rect->getWidth() << " feet\n";
    std::cout << "p_constRect width: " << p_constRect->getWidth() << " feet\n";
    std::cout << "p_constPtr width: " << p_constPtr->getWidth() << " feet\n";

    p_rect->setWidth(10);
    // The next line is a compiler error. A const Rectangle can only call const methods
    // p_constRect->setLength(10);
    p_constPtr->setWidth(10);

    std::cout << "p_rect width: " << p_rect->getWidth() << " feet\n";
    std::cout << "p_constRect width: " << p_constRect->getWidth() << " feet\n";
    std::cout << "p_constPtr width: " << p_constPtr->getWidth() << " feet\n";

    return 0;
}