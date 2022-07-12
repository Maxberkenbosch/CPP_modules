#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ): type("Animal")
{
    std::cout << "Default constructor for Animal called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal called" << std::endl;
}

Animal::Animal( const Animal &src)
{
    std::cout << "Copy constructor for Animal called" << std::endl;
    *this = src;
    return ;
}

void    Animal::makeSound( void ) const
{
    std::cout << "A combination of all animal sounds combined?!" << std::endl; 
}

const std::string   &Animal::getType( void ) const
{
    return (this->type);
}

Animal &    Animal::operator=( Animal const &ref)
{
    std::cout << "Assignment operator for Animal called" << std::endl;
    this->type = ref.getType();
    return (*this);
}
