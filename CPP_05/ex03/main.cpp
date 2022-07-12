#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		intern;
	Bureaucrat	paul("Paul", 3);
	Form		*form;

	form = intern.makeForm("this one doesn't exist", "Justin");
	if (form)
		delete form;
	form = intern.makeForm("presidential pardon", "Maynard");
	if (form)
		delete form;
	form = intern.makeForm("shrubbery creation", "Danny");
	if (form)
		delete form;
	form = intern.makeForm("robotomy request", "Adam");
	form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;
}
