#include "Animal.hpp"
#include <iostream>

Animal::~Animal()
{
    std::cout << "Destructor for Animal called" << std::endl;
}

Animal &Animal::operator=( Animal const &ref)
{
    std::cout << "Assignment operator for Animal called" << std::endl;
    this->type = ref.getType();
    return (*this);
}