#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:	
	void				get_info();
	int 				checkContact();
	void				print_contact_info();
	void				check_and_print(std::string info);
	const std::string&	getContractInfo( const std::string type );
};

#endif