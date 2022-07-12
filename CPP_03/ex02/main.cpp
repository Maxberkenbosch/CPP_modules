#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap    claptrap("Henkie");

    claptrap.attack("Klaas");
    claptrap.takeDamage(9);
    claptrap.beRepaired(3);
    claptrap.attack("Klaas");
    claptrap.takeDamage(5);
    claptrap.takeDamage(9);
    
    std::cout << "----------------" << std::endl;
    ScavTrap    scavtrap("John");

    scavtrap.attack("Peter");
    scavtrap.takeDamage(9);
    scavtrap.guardGate();
    scavtrap.beRepaired(3);
    scavtrap.attack("Peter");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(3);

    std::cout << "----------------" << std::endl;

    FragTrap    fragtrap("Henkie");

    fragtrap.attack("Pietje");
    fragtrap.takeDamage(9);
    fragtrap.beRepaired(3);
    fragtrap.highFivesGuys();
    fragtrap.attack("Pietje");
    fragtrap.takeDamage(5);
    fragtrap.beRepaired(3);

    std::cout << "----------------" << std::endl;
}