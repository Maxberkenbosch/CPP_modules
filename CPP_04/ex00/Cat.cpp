#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
    std::cout << "Default constructor for Cat called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = src;
}

Cat &Cat::operator=( const Cat &obj)
{
    std::cout << "Assignement operator for Cat called" << std::endl;
    this->type = obj.getType();
    return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miiieeaauuwwwww!" << std::endl;
}

