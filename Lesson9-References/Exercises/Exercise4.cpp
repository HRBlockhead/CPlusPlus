// Write a program that produces a stray pointer
// Exercise 5: Fix it!

int main()
{
    int varOne;
    int* pVar = &varOne;
    *pVar = 9;
    return 0; 
}