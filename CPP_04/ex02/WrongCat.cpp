#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void )
{
    std::cout << "Default constructor for WrongCat called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    std::cout << "Copy constructor for WrongCat called" << std::endl;
    *this = src;
}

WrongCat    &WrongCat::operator=( const WrongCat &obj )
{
    std::cout << "Assignment operator for WrongCat called" << std::endl;
    this->type = obj.getType();
    return *(this);
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Woeff?" << std::endl;
}