int divide( unsigned short dividend, unsigned short divisor )
{
    int quotient;
    if ( divisor == 0 )
        quotient = -1;
    else
        quotient = dividend / divisor;
}