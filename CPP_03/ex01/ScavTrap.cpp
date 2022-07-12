#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) 
{
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20) 
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor is called." << std::endl;
    return ;
}

ScavTrap::ScavTrap( const ScavTrap & src)
{
    *this = src;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &object)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	this->_attackDamage = object._attackDamage;
	this->_energyPoints = object._energyPoints;
	this->_hitPoints = object._hitPoints;
	this->_name = object._name;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (((this->_energyPoints > 0)) && (this->_hitPoints > 0))
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ScavTrap " << _name << " has no energy points left." << std::endl;
    else
        std::cout << "ScavTrap " << _name << " has no hitpoints left." << std::endl; 
    this->_energyPoints -= 1;
    return ;
}

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
    return ;
} 
