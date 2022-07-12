#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): type(weapon)
{
}

Weapon::~Weapon( void )
{
}

const	std::string &Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType( const std::string& type )
{
	this->type = type;
}