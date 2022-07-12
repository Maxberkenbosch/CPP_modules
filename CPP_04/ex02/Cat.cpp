#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
    std::cout << "Default constructor for Cat called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
    return ;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Destructor for Cat called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = src;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miiieeaauuwwwww!" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
    return (this->brain);
}

const std::string   &Cat::getType( void ) const
{
    return (this->type);
}

Cat &Cat::operator=( Cat const &ref)
{
    std::cout << "Assignment operator for Cat called" << std::endl;
    this->type = ref.getType();
    *(this->brain) = *(ref.getBrain());
    return (*this);
}
