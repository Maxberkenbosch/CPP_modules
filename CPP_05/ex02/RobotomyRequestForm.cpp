#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ): Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Standard constructor for RobotomyRequestForm called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( void ): Form("RobotomyRequestForm", 72, 45), _target("")
{
	std::cout << "Default constructor for RobotomyRequestForm called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ): Form("RobotomyRequestForm", 72, 45), _target(src.getTarget())
{
	std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "Destructor for RobotomyRequestForm called" << std::endl;
	return;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & obj )
{
	obj.getTarget();
	std::cout << "Assignement operator for RobotomyRequestForm called" << std::endl;
	return *this;
}

const std::string	&RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}

void	RobotomyRequestForm::execute( const Bureaucrat &exec ) const
{
	this->checkExecutability(exec);
	std::cout << "* Unbearable drilling noises *" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized, this happens 50% of the time." << std::endl;
	else
		std::cout << "The robotomization on " << this->_target << " failed..." << std::endl;
}