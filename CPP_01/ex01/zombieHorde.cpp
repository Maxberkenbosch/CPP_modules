#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde( int N, std::string new_name )
{
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i].setName(new_name);
	return (zombies);
}