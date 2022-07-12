#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void): _name("")
{
}

Zombie::~Zombie(void)
{
	std::cout << Zombie::_name << " passed away..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

bool	Zombie::setName( std::string newName )
{
	if (newName == "")
		return (false);
	this->_name = newName;
	return (true);
}