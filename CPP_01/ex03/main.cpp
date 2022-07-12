#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int	main(void)
{
	{
		Weapon	arm = Weapon("shotgun");
		HumanA	bob("Bob", arm);
		bob.attack();
		arm.setType("sniper");
		bob.attack();
	}
	{
		Weapon	arm = Weapon("shotgun");
		HumanB	Jan("Jan");
		Jan.attack();
		Jan.setWeapon(arm);
		arm.setType("pistol");
		Jan.attack();
	}
}