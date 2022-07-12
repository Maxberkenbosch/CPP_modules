#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombies = zombieHorde(7, "Hagrid");
	for (int i = 0; i < 7; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}