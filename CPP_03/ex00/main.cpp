#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    claptrap("Henky");

    claptrap.attack("Klaas");
    claptrap.takeDamage(9);
    claptrap.beRepaired(3);
    claptrap.attack("Klaas");
    claptrap.takeDamage(5);
}