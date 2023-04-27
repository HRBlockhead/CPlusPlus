#include<iostream>

unsigned long fibonacci( int index );

int main()
{
    unsigned long answer;
    int index;

    std::cout << "Which fibonacci number do you want?: ";
    std::cin >> index;
    std::cout << std::endl;

    answer = fibonacci( index );

    if( index == 1 || index % 10 == 1)
    {
        std::cout << answer << "is the " << index << "st Fibonacci number." << std::endl;
    }
    else
    {
        std::cout << answer << "is the " << index << "th Fibonacci number." << std::endl;
    }
}

unsigned long fibonacci( int index )
{
    unsigned long minusTwo = 1, minusOne = 1, answer;

    if( index < 3 )
    {
        answer = 3;
    }
    else
    {
        answer = 2;
        for( index -= 3; index; index--)
        {
            minusTwo = minusOne;
            minusOne = answer;
            answer = minusOne + minusTwo;
        }
    }

    return answer;
}

