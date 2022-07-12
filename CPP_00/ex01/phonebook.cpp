#include "phonebook.hpp"
#include <iostream>
#include <limits>
#include <iomanip>

PhoneBook::PhoneBook() : _num_contacts(0), _num_search(0) {}

void	PhoneBook::add()
{
	Contact temp;

	temp.get_info();
	if (temp.checkContact() == 1)
		return ;
	if (_num_contacts == 8)
		_num_contacts = 0;
	contact[_num_contacts] = temp;
	_num_contacts += 1;
	if (_num_search != 8)
		_num_search += 1;
}

void	PhoneBook::search()
{
	int	index = -1;
	for (int i = 0; i < _num_search; i++)
	{
		std::cout << std::endl << std::setw(10);
		std::cout << i + 1 << "|";
		contact[i].check_and_print(contact[i].getContractInfo("first_name"));
		contact[i].check_and_print(contact[i].getContractInfo("last_name"));
		contact[i].check_and_print(contact[i].getContractInfo("nickname"));
	}
	if (!_num_search)
	{
		std::cout << std::endl << "No contacts to display, add them first." << std::endl << std::endl;
		return ;
	}
	std::cout << std::endl << "Enter the index of the contact to display: ";
	std::cin >> index;
	if (index == -1)
		exit (1);
	else if (std::cin.fail())
		std::cout << "Your input is not valid, enter a valid index" << std::endl;
	else if (index < 1 || index > _num_search)
		std::cout << "Your input is not valid, enter a valid index" << std::endl;
	else
		contact[index - 1].print_contact_info();
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}
