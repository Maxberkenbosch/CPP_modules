#include "A.hpp"
#include <iostream>

A::A( void )
{
    std::cout << "Default constructor for A called." << std::endl;
}

A::~A()
{
    std::cout << "Destructor for A called." << std::endl;
}