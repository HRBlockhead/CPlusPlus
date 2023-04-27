// Illustrates how to parse out words from a character String
#include <iostream>
#include <cstring>

bool getWord(char* string, char* word, int& wordOffset);

int main()
{
    const int bufferLength = 256;
    char buffer[bufferLength];
    char word[bufferLength];
    int wordOffset = 0;

    std::cout << "Enter a string: ";
    std::cin.getline(buffer, bufferLength);

    while( getWord( buffer, word, wordOffset ) )
    {
        std::cout << "Got this word: " << word << std::endl;
    }

    return 0;
}

bool getWord( char* string, char* word, int& wordOffset )
{
    if( !string[wordOffset] ) return false; //end of string

    char *p1, *p2;
    // point to the next word
    p1 = p2 = string + wordOffset;

    //eat leading spaces
    for( int ii = 0; ii < (int) strlen(p1) && !isalnum(p1[0]); ii++)
        p1++;

    // no word
    if( !isalnum( p1[0] ) ) return false;

    // put p2 at end of word to determine length
    p2 = p1;
    
    while( isalnum( p2[0] ) )
        p2++;
    
    int length = int ( p2 - p1 );
    strncpy(word, p1, length);
    word[length] = '\0';

    // find the beginning of the next word
    for( int ii = int( p2 - string ); ii < (int) strlen( string ) && !isalnum( p2[0] ); ii++ )
        p2++;

    wordOffset = int( p2 - string );

    return true;

}
