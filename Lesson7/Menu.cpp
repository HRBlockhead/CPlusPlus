#include <iostream>

//prototypes
int menu();
void doTaskOne();
void doTaskMany( int taskNumber );

int main()
{
    bool exit = false;
    for(;;)
    {
        int choice = menu();
        switch( choice )
        {
            case( 1 ):
                doTaskOne();
                break;
            case( 2 ):
                doTaskMany( 2 );
                break;
            case( 3 ):
                doTaskMany( 3 );
                break;
            case( 4 ):
                continue;
                break;
            case( 5 ):
                exit = true;
                break;
            default:
                std::cout << "Please select again!\n";
                break;
        }

        if (exit) break;
    }
    return 0;
}

int menu()
{
    int choice;

    std::cout << " **** Menu ****\n\n";
    std::cout << "(1) Choice one.\n";
    std::cout << "(2) Choice two.\n";
    std::cout << "(3) Choice three.\n";
    std::cout << "(4) Redisplay menu.\n";
    std::cout << "(5) Quit.\n\n";
    std::cout << ": ";

    std::cin >> choice;
    return choice;
}

void doTaskOne()
{
    std::cout << "Task One!\n";
}

void doTaskMany( int taskNumber )
{
    if( taskNumber == 2)
    {
        std::cout << "Task Two!\n";
    }
    else
    {
         std::cout << "Task Three!\n";
    }
}