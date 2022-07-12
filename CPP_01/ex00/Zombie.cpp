#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name )
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": I can see the light......" << std::endl << std::endl;
}