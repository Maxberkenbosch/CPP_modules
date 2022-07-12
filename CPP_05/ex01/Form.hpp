#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:

	Form( const std::string &name, int gradeToSign, int gradeToExecute );
	Form( const Form &src );
	~Form( void );

	Form	&operator=( const Form &rhs );

	const std::string	&getName( void ) const;
	int					getSignGrade( void ) const;
	int					getExecuteGrade( void ) const;
	bool				isSigned( void ) const;

	void	checkGrades( void ) const ;
	void	checkExecutability( const Bureaucrat &bureaucrat ) const ;
	bool	beSigned( const Bureaucrat &bureaucrat );

	static bool	verbose;

private:

	Form( void );

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

public:

	class CantExecuteForm : public std::exception{
		public:
		const char* what() const throw();
	};

	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};


};

std::ostream	&operator<<( std::ostream &ostr, const Form &instance );

#endif