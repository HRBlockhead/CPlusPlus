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
    Rectangle* pRect = new Rectangle;
    const Rectangle * pConstRect = new Rectangle;
    Rectangle * const pConstPtr = new Rectangle;

    std::cout << "pRect width: " << pRect->getWidth() << " feet\n";
    std::cout << "pConstRect width: " << pConstRect->getWidth() << " feet\n";
    std::cout << "pConstPtr width: " << pConstPtr->getWidth() << " feet\n";

    pRect->setWidth(10);
    // The next line is a compiler error. A const Rectangle can only call const methods
    // p_constRect->setLength(10);
    pConstPtr->setWidth(10);

    std::cout << "pRect width: " << pRect->getWidth() << " feet\n";
    std::cout << "pConstRect width: " << pConstRect->getWidth() << " feet\n";
    std::cout << "pConstPtr width: " << pConstPtr->getWidth() << " feet\n";

    return 0;
}