#include <iostream>

/**********************************************
 * Holds x, y coordinates
 * ********************************************/
class Point
{
    public:
        int getX() const { return x; };
        void setX(int newX) { x = newX; };
        int getY() const { return y; };
        void setY(int newY) { y = newY; };
    private:
        int x;
        int y;
};

class Rectangle
{
    public:
        Rectangle(int top, int left, int bottom, int right);
        ~Rectangle() {};

        int getTop() const { return top; } 
        void setTop(int newTop) { top = newTop; }
        int getLeft() const { return left; } 
        void setLeft(int newLeft) { left = newLeft; }
        int getBottom() const { return bottom; } 
        void setBottom(int newBottom) { bottom = newBottom; }
        int getRight() const { return right; } 
        void setRight(int newRight) { right = newRight; }

        Point getUpperLeft() const { return upperLeft; }
        void setUpperLeft(Point newPoint) { upperLeft = newPoint; }
        Point getUpperRight() const { return upperRight; }
        void setUpperRight(Point newPoint) { upperRight = newPoint; }
        Point getLowerLeft() const { return lowerLeft; }
        void setLowerLeft(Point newPoint) { lowerLeft = newPoint; }
        Point getLowerRight() const { return lowerRight; }
        void setLowerRight(Point newPoint) { lowerRight = newPoint; }

        int getArea() const;
    
    private:
        int top;
        int left;
        int bottom;
        int right;

        Point upperLeft;
        Point upperRight;
        Point lowerLeft;
        Point lowerRight;
};