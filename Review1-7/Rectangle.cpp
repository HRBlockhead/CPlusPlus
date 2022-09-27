#include <iostream>

enum CHOICE { DRAW_RECT = 1, GET_AREA, GET_PERIM, CHANGE_DIMENSIONS, QUIT };

class Rectangle
{
    public:
        // Constructors
        Rectangle( int width, int height );
        ~Rectangle();

        // Getters and setters
        int getHeight() const { return height; }
        int getWidth() const { return width; }
        int getArea() const { return height * width; }
        int getPerimeter() const { return 2 * height + 2 * width; } 
        void setSize( int newWidth, int newHeight);

    private:
        int width;
        int height;
};

// Rectangle constructors
Rectangle::Rectangle( int width, int height )
{
    this->width = width;
    this->height = height;
}

Rectangle::~Rectangle() {}

// Rectangle method implementations
void Rectangle::setSize( int newWidth, int newHeight )
{
    width = newWidth;
    height = newHeight;
}

//prototypes
int doMenu();
void doDrawRectangle(Rectangle rectangle);
void doGetArea(Rectangle rectangle);
void doGetPerimeter(Rectangle rectangle);

int main()
{
    Rectangle theRect(30, 5);

    int choice = DRAW_RECT;
    int fQuit = false;

    while( !fQuit )
    {
        choice = doMenu();
        if( choice < DRAW_RECT || choice > QUIT )
        {
            std::cout << "\nInvalid choice, please try again.\n\n";
            continue;
        }
        switch( choice )
        {
            case DRAW_RECT:
                doDrawRectangle( theRect );
                break;
            case GET_AREA:
                doGetArea( theRect );
                break;
            case GET_PERIM:
                doGetPerimeter( theRect );
                break;
            case CHANGE_DIMENSIONS:
                int newHeight, newWidth;
                std::cout << "\nNew height: ";
                std::cin >> newHeight;
                std::cout << "\nNew width: ";
                std::cin >> newWidth;
                theRect.setSize( newWidth, newHeight );
                doDrawRectangle( theRect );
                break;
            case QUIT:
                fQuit = true;
                std::cout << "\nExiting... \n\n";
                break;
            default:
                std::cout << "Error in choice! \n\n";
                fQuit = true;
                break;   
        }
    }

    return 0;
}

/*************************************************
 * Draws the menu on the terminal and returns the
 * user's choice.
 *************************************************/
int doMenu()
{
    int choice;

    std::cout << " **** Menu ****\n\n";
    std::cout << "(1) Draw Rectangle.\n";
    std::cout << "(2) Area.\n";
    std::cout << "(3) Perimeter.\n";
    std::cout << "(4) Resize.\n";
    std::cout << "(5) Quit.\n\n";
    std::cout << ": ";

    std::cin >> choice;
    return choice;
}

/*************************************************
 * Draws the rectangle on the screen
 *************************************************/
void doDrawRectangle(Rectangle rectangle)
{
    int height = rectangle.getHeight();
    int width = rectangle.getWidth();

    for( int ii = 0; ii < height; ii++)
    {
        for( int jj = 0; jj < width; jj++ )
            std::cout << "*";
        std::cout << "\n";
    }
}

/*************************************************
 * Prints the area of the rectangle on the screen
 *************************************************/
void doGetArea(Rectangle rectangle)
{
    std::cout << "Area: " << rectangle.getArea() << std::endl;
}

/*************************************************
 * Prints the perimeter of the rectangle on the screen
 *************************************************/
void doGetPerimeter(Rectangle rectangle)
{
    std::cout << "Perimeter: " << rectangle.getPerimeter() << std::endl;
}