/**************************************************************************************************
 * Program to compare the timing of iterative vs recursive solution to finding
 * the nth fibonacci number.
 *************************************************************************************************/
#include <iostream>
#include <chrono>

using namespace std::chrono;

int fibonacci_iterative( int index );
int fibonacci_recursive( int n );


int main()
{
    unsigned long answer;
    int index;

    std::cout << "Which fibonacci number do you want?: ";
    std::cin >> index;
    std::cout << std::endl;


    auto start = high_resolution_clock::now();
    answer = fibonacci_iterative( index );
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>( stop - start );

    if( index == 1 || index % 10 == 1)
    {
        std::cout << answer << "is the " << index << "st Fibonacci number." << std::endl;
    }
    else
    {
        std::cout << answer << "is the " << index << "th Fibonacci number." << std::endl;
    }

    std::cout << "Time taken by iterative solution: " << duration.count() << " nanoseconds.\n";

    start = high_resolution_clock::now();
    answer = fibonacci_recursive( index );
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>( stop - start );

    if( index == 1 || index % 10 == 1)
    {
        std::cout << answer << "is the " << index << "st Fibonacci number." << std::endl;
    }
    else
    {
        std::cout << answer << "is the " << index << "th Fibonacci number." << std::endl;
    }
    
    std::cout << "Time taken by recursive solution: " << duration.count() << " nanoseconds.\n";

}

int fibonacci_iterative( int index )
{
    int minusTwo = 1, minusOne = 1, answer;

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

int fibonacci_recursive( int n )
{
    int answer;
    if( n < 3 )
    {
        answer = 1;
    }
    else
    {
        return fibonacci_recursive( n - 2 ) + fibonacci_recursive( n - 1 );
    }
    return answer;
}