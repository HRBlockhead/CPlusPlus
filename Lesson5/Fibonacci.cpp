#include <iostream>

int fibonacci( int n );

int main()
{
    int n, answer;
    std::cout << "Enter fibonacci number to find: ";
    std::cin >> n;
    std::cout << "\n\n";

    answer = fibonacci( n );

    std::cout << answer << " is the " << n << "th Fibonacci number" << std::endl;

    return 0;
}

int fibonacci( int n )
{
    std::cout << "Processing fibonacci(" << n << ")... ";

    if( n < 3 )
    {
        std::cout << "Return 1! \n";
        return 1;
    }
    else
    {
        std::cout << "Call fibonacci(" << n-2 << ") and fibonacci(" << n-1 << ").\n";
        return fibonacci( n - 2 ) + fibonacci( n - 1 );
    }
}