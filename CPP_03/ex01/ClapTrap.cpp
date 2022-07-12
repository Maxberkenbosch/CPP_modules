#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void )
{
    std::cout << "ClapTrap's default constructor is called." << std::endl;
    this->_name = "";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    return ;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage) 
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::ClapTrap( std::string _name ): _name(_name)
{
    std::cout << "ClapTrap " << _name << " is spawned!" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap " << this->_name << " died.." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (((this->_energyPoints > 0)) && (this->_hitPoints > 0))
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap " << _name << " has no energy points left." << std::endl;
    else
        std::cout << "ClapTrap " << _name << " has no hitpoints left." << std::endl; 
    this->_energyPoints -= 1;
    return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) 
{
	_name = claptrap._name;
	_hitPoints = claptrap._hitPoints;
	_energyPoints = claptrap._energyPoints;
	_attackDamage = claptrap._attackDamage;
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return *this;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage, and has " << this->_hitPoints << " hit point left." << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " has no hitpoints left." << std::endl;  
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (((this->_energyPoints > 0)) && (this->_hitPoints > 0))    
    {
        this->_hitPoints += amount;
        std::cout << "ClapTrap restored it's hit points with " << amount << ", " << _name << " now has " << this->_hitPoints << " hit points." << std::endl;
    }
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap " << _name << " has no energy points left." << std::endl;
    else
        std::cout << "ClapTrap " << _name << " has no hitpoints left." << std::endl;
    this->_energyPoints -= 1;
    return ;
}
