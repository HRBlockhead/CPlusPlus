#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(int top, int left, int bottom, int right)
{
    this->top = top;
    this->left = left;
    this->bottom = bottom;
    this->right = right;

    upperLeft.setX(left);
    upperLeft.setY(top);

    upperRight.setX(right);
    upperRight.setY(top);

    lowerLeft.setX(left);
    lowerLeft.setY(bottom);

    lowerRight.setX(right);
    lowerRight.setY(bottom);
}

/*******************************************************************
 * getArea(): finds the area of the rectangle
 * parameters: none
 * returns: integer area of the rectanlge
 *******************************************************************/
int Rectangle::getArea() const
{
    int width = right - left;
    int height = top - bottom;
    return width * height;
}

int main()
{
    Rectangle myRectangle(100, 20, 50, 80);

    int area = myRectangle.getArea();

    std::cout << "Area: " << area << std::endl;
    std::cout << "Upper left X coordinate: " << myRectangle.getUpperLeft().getX();
    std::cout << std::endl;

    return 0;
}