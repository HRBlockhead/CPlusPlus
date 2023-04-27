int main()
{
    int varOne = 6;
    const int* const pInt = &varOne;
    // Error: assignment of read-only location
    *pInt = 7;

    int varTwo;
    // Error: assignment of read-only variable
    pInt = &varTwo;
}