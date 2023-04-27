/********************************************************************************************
 * Guessing Game
 * This program is a guessing game. The player enters four numbers: one small, one large, a 
 * skip and a target. The small number counts up by one and the larger one counts down by twos.
 * The decrement will be skipped each time the small number is a multiple of the skip. If the 
 * target matches where small and large meet, you win!!
 ********************************************************************************************/
#include <iostream>

int main()
{
    unsigned short small;
    unsigned long large, skip, target;
    const unsigned short MAX_SMALL = 65535;

    std::cout << "Enter a small number: ";
    std::cin >> small;
    std::cout << "Enter a large number: ";
    std::cin >> large;
    std::cout << "Enter a skip number: ";
    std::cin >> skip;
    std::cout << "Enter a target number: ";
    std::cin >> target;

    std::cout << std::endl;

    while( small < large && large > 0 && small < MAX_SMALL )
    {
        small++;

        // skip the decrement?
        if( small % skip == 0)
        {
            std::cout << "skipping on " << small << std::endl;
            continue;
        }
        if( large == target )
        {
            std::cout << "Target reached!";
            break;
        }   

        large-=2;
    }
    
    std::cout << "\nSmall: " << small << " Large: " << large << std::endl;
    return 0;
} 