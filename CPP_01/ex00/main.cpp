#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "This is one way to create a zombie:" << std::endl;
	Zombie zombie("Jan");
	zombie.announce();

	std::cout << "This is a dynamic zombie:" << std::endl;
	Zombie *dynamic_zombie = newZombie("Henk");
	dynamic_zombie->announce();
	delete dynamic_zombie;

	std::cout << "This zombie is a random chump:" << std::endl;
	randomChump("Kees");

	return (0);
}