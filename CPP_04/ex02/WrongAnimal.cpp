#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ): type("Wrong Animal")
{
    std::cout << "Default constructor for WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor for WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &ref )
{
    std::cout << "Copy constructor for WrongAnimal called" << std::endl;
    *this = ref;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &obj )
{
    std::cout << "Assignment operator for WrongAnimal called" << std::endl;
    this->type = obj.getType();
    return (*this);
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "A combination of all WrongAnimal sounds combined?!" << std::endl; 
}

const std::string   &WrongAnimal::getType( void ) const
{
    return (this->type);
}