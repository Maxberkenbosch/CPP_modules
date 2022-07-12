#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) 
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30) 
{
	std::cout << "FragTrap constructor called" << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor is called." << std::endl;
    return ;
}

FragTrap &FragTrap::operator=(const FragTrap &ref) 
{
	_name = ref._name;
	_hitPoints = ref._hitPoints;
	_energyPoints = ref._energyPoints;
	_attackDamage = ref._attackDamage;
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return *this;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "Hey Guys! Give me a high five!" << std::endl;
    return ;
}    

