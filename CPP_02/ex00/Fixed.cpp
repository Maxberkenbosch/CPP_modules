#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ): _fixedPointValue(0)
{
		std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=( Fixed const & obj )
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &obj)
		this->_fixedPointValue = obj._fixedPointValue;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( const int rawBits )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = rawBits;
}
