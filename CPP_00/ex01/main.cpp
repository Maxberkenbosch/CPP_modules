#include "phonebook.hpp"
#include <iostream>

void	PhoneBook::initialize()
{
	_num_contacts = 0;
	_num_search = 0;
}

int	main(void)
{
	PhoneBook	phonebook;

	std::string command;	phonebook.initialize();
	while (std::cin)
	{
		std::cout << "Enter one of the three commands; ADD, SEARCH or EXIT: " << std::endl;
		std::getline (std::cin, command);
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << std::endl << "You did not enter a valid command" << std::endl << std::endl;
	}
	return (0);
}