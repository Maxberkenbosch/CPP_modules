#include "contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::get_info()
{
    std::cout << "Enter your first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter your last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter your phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, darkest_secret);
}

int Contact::checkContact()
{
	if ((first_name.length() == 0) ||
		(last_name.length() == 0) ||
		(nickname.length() == 0) ||
		(phone_number.length() == 0) ||
		(darkest_secret.length() == 0))
	{
		std::cout << std::endl << "You left a field empty, the contact is not saved." << std::endl << std::endl;
        return (1);
	}
    return (0);
}

void	Contact::print_contact_info()
{
	std::cout << std::endl;
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
	std::cout << std::endl << std::endl;
}

void	Contact::check_and_print(std::string info)
{
	if (info.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << info;
		std::cout << "|";
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << info[i];
		std::cout << ".";
		std::cout << "|";
	}
}

const std::string&	Contact::getContractInfo( const std::string type )
{
	if (type == "first_name")
		return (this->first_name);
	if (type == "last_name")
		return (this->last_name);
	if (type == "nickname")
		return (this->nickname);
	return (this->darkest_secret);
}	

