int main()
{
    int varOne = 1;
    int& varTwo = varOne;
    int* varThree = &varOne;

    varTwo = 2;
    *varThree = 3;

    return 0;
}