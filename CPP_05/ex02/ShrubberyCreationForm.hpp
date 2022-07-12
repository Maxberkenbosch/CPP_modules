#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{

public:

	ShrubberyCreationForm( const std::string &target );
	ShrubberyCreationForm( const ShrubberyCreationForm &src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &ref );

	const std::string	&getTarget( void ) const;
	virtual void		execute( const Bureaucrat &exec ) const;

private:

	const std::string		_target;

	ShrubberyCreationForm( void );

};

#endif
