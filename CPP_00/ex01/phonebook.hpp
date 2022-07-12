#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
	private:
	Contact	contact[8];
	int	_num_contacts;
	int	_num_search;

	public:
	PhoneBook( void );

	void	add();
	void	search();
	void	initialize();
};

#endif