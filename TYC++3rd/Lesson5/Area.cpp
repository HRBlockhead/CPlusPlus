#include <iostream>
int area(int length, int width);

int main()
{
    int lengthOfYard;
    int widthOfYard;
    int areaOfYard;

    std::cout << "\nHow wide is your yard? (in feet) ";
    std::cin >> widthOfYard;
    std::cout << "\nHow long is your yard? (in feet) ";
    std::cin >> lengthOfYard;

    areaOfYard = area(lengthOfYard, widthOfYard);

    std::cout << "\nYour yard is " << areaOfYard << " sqft.\n\n";

    return 0;
}

int area( int yardLength, int yardWidth )
{
    return yardLength * yardWidth;
}