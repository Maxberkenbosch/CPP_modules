#include "Convert.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

Convert::Convert( void )
{
    std::cout << "Default constructor called for Convert." << std::endl;
}

Convert::~Convert()
{
    std::cout << "Destructor called for Convert." << std::endl;
}

Convert::Convert( std::string input ): _input(input)
{
    std::cout << "Input constructor called for Convert." << std::endl;
    convertInput();
}

std::string Convert::detectType(void)
{
    int hasDot = 0;

    if ((this->_input[0] >= ' ' && this->_input[0] <= '~') && ft_strlen (this->_input) == 1 && !isDigit(this->_input[0]))
        return ("char");
    if (this->_input == "-inff" || this->_input == "+inff" || this->_input == "nanf")
        return ("pseudo float");
    if (this->_input == "-inf" || this->_input == "+inf" || this->_input == "nan")
        return ("pseudo double");
    for (unsigned long i = 0; i < this->_input.length(); i++)
    {
        if (i == 0 && this->_input[0] == '-')
            i++;
        if (this->_input[i] == 'f' && this->_input[i + 1] == '\0' && hasDot == 1)
            return ("float");
        if (this->_input[i] == '.')
            hasDot = 1;
        if (!isDigit(this->_input[i]) && this->_input[i] != '.')
            return ("error");
    }
    if (hasDot)
        return ("double");
    else
        return ("integer");
}

void    Convert::convertPseudo( std::string type )
{
    std::string temp;
    std::string str = this->_input;

    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (type == "pseudo float")
    {
        temp = str;
        temp[ft_strlen(temp) - 1] = '\0';
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << temp << std::endl;
    }
    if (type == "pseudo double")
    {
        temp = str + "f";
        std::cout << "float: " << temp << std::endl;
        std::cout << "double: " << str << std::endl;
    }
}

void    Convert::convertChar( void )
{
    this->_character = this->_input[0];
    this->_numInt = (int)this->_character;
    this->_numFloat = (float)this->_character;
    this->_numDouble = (double)this->_character;
}

void    Convert::convertInt( void )
{
    std::stringstream stringToInt;

    stringToInt << this->_input;
    stringToInt >> this->_numInt;
    if (this->_numInt > 32 && this->_numInt < 126)
        this->_character = (char)this->_numInt;
    this->_numFloat = (float)this->_numInt;
    this->_numDouble = (double)this->_numInt;
}

void    Convert::convertFloat( void )
{
    std::stringstream stringToFloat;
    std::string str = this->_input;

    str[ft_strlen(str) - 1] = '\0';
    stringToFloat << str;
    stringToFloat >> this->_numFloat;
    if (this->_numFloat > 32 && this->_numFloat < 126)
        this->_character = (char)this->_numFloat;
    this->_numInt = (int)this->_numFloat;
    this->_numDouble = (double)this->_numFloat;
}

void    Convert::convertDouble( void )
{
    std::stringstream stringToDouble;

    stringToDouble << this->_input;
    stringToDouble >> this->_numDouble;
    if (this->_numDouble > 32 && this->_numDouble < 126)
        this->_character = (char)this->_numDouble;
    this->_numFloat = (float)this->_numDouble;
    this->_numInt = (int)this->_numDouble;
}

void    Convert::printResult( void )
{
    if (this->_character == '\0')
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << this->_character << std::endl;
    std::cout << std::fixed << "int: " << this->_numInt << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << this->_numFloat << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double: " << this->_numDouble << std::endl;
}

class ErrorException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("No legal type was given. The argument has to be type char, int, float or double.");
        }
    };

    class ArgcException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("You entered the wrong amount of arguments, only one data type can be given.");
        }
    };

    class OverflowException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("Error: overflow.");
        }
    };

void    Convert::convertInput( void )
{
    std::string type = detectType();

    if (type == "error")
        throw ErrorException();
    if (type == "pseudo float" || type == "pseudo double")
    {
        convertPseudo( type );
        return ;
    }
    CheckOverflow();
    if (type == "char")
        convertChar();
    if (type == "integer")
        convertInt();
    if (type == "float")
        convertFloat();
    if (type == "double")
        convertDouble();
    printResult();
}

const char*Convert::ErrorException::what() const throw(){
    return ("No legal type was given. The argument has to be type char, int, float or double.");
}

const char*Convert::ArgcException::what() const throw(){
    return ("You entered the wrong amount of arguments, only one data type can be given.");
}

const char*Convert::OverflowException::what() const throw(){
    return ("Error: overflow.");
}