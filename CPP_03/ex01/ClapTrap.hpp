#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;

    ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);

public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap &src );
    virtual ~ClapTrap( void );

	ClapTrap	&operator=( const ClapTrap &other );

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

# endif
