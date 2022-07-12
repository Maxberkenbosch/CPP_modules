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

Animal &    Animal::operator=( Animal const &ref)
{
    std::cout << "Assignement operator for Animal called" << std::endl;
    this->type = ref.getType();
    return (*this);
}


void    Animal::makeSound( void ) const
{
    std::cout << "A combination of all animal sounds combined?!" << std::endl; 
}

const std::string   &Animal::getType( void ) const
{
    return (this->type);
}

std::ostream    &operator<<( std::ostream &ostream, const Animal &input)
{
    ostream << input.getType();;
    return (ostream);
}
