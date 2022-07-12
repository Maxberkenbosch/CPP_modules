#include "Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
    std::cout << "Default constructor for Dog called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Destructor for Dog called" << std::endl;
}

Dog::Dog(const Dog &src)
{
    std::cout << "Copy constructor for Dog called" << std::endl;
    *this = src;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woeffff!" << std::endl;
}

Brain *Dog::getBrain( void ) const
{
    return (this->brain);
}

const std::string   &Dog::getType( void ) const
{
    return (this->type);
}

Dog &Dog::operator=( Dog const &ref)
{
    std::cout << "Assignment operator for Dog called" << std::endl;
    this->type = ref.getType();
    *(this->brain) = *(ref.getBrain());
    return (*this);
}

