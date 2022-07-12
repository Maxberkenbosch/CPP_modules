#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): name(name), weapon(nullptr)
{
}

void    HumanB::setWeapon( Weapon& newWeapon )
{
    this->weapon = &newWeapon;
}

void	HumanB::attack(void)
{
    if (this->weapon)
	    std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
    else
	    std::cout << this->name << " can not attack because they has no weapon" << std::endl;
}