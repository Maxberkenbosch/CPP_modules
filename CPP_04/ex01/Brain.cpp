#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
    std::cout << "Default constructor for Brain is called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor for Brain is called" << std::endl;
}

Brain::Brain( const Brain &obj )
{
    std::cout << "Copy constructor for Brain called" << std::endl;
    *this = obj;
}

Brain   &Brain::operator=( const Brain &obj )
{
    std::cout << "Assignment operator for Brain called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
    return (*this);
}