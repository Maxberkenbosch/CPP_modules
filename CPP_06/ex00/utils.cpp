#include "Convert.hpp"
#include <climits>
#include <sstream>

int ft_strlen( std::string input)
{
    int i = 0;
    while (input[i] != '\0')
        i++;
    return (i);
}

bool    isDigit( char c )
{
    if( c >= '0' && c <= '9')
        return (true);
    return (false);
}

void    Convert::CheckOverflow( void )
{
    std::stringstream stringToDouble;

    stringToDouble << this->_input;
    stringToDouble >> this->_numDouble;
    if (this->_numDouble > INT_MAX || this->_numDouble < INT_MIN)
        throw (Convert::OverflowException());
}