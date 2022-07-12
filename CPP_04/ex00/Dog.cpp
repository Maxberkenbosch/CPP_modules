#include "Dog.hpp"

Dog::Dog( void )
{
    std::cout << "Default constructor for Dog called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog called" << std::endl;
}

Dog::Dog(const Dog &src)
{
    std::cout << "Copy constructor for Dog called" << std::endl;
    *this = src;
}

Dog &Dog::operator=( const Dog &obj)
{
    std::cout << "Assignment operator for Dog called" << std::endl;
    this->type = obj.getType();
    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woeffff!" << std::endl;
}
