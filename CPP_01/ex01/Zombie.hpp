#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:

	std::string _name;
	
	public:

	Zombie	( void );
	~Zombie	( void );

	bool	setName( std::string newName );
	void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif