#include "Bureaucrat.hpp"

int	main(void)
{
	try
    {
        Bureaucrat  bureaucrat("Henk", 50);
        
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade(5);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade(2);
        std::cout << bureaucrat << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	try
    {
        Bureaucrat  bureaucrat("John", 0);
        
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade(3);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade(3);
        std::cout << bureaucrat << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	try
    {
        Bureaucrat  bureaucrat("Piet", 151);
        
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade(3);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade(3);
        std::cout << bureaucrat << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	return 0;
}
