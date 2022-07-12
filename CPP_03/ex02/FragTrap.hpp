#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap( void );
    FragTrap( std::string name );
    ~FragTrap( void );
    FragTrap( const FragTrap &src );

    FragTrap &operator=( const FragTrap &ref );

    void    highFivesGuys( void );     
};

# endif