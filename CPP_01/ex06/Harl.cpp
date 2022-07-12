#include "Harl.hpp"
#include <iostream>

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level)
{
    void    (Harl::*complaint[])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error,
    };
    std::string complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
    };

    for (int i = 0; i < 4; i++)
    {
        if (level == complaintLevels[i])
        {
            void (Harl::*selectedComplaint)( void ) = complaint[i];
            (this->*selectedComplaint)();
            return ;
        }
    }
    std::cout << "I've run out of words..." << std::endl;
}

int     Harl::get_level(std::string level)
{
	int i = 0;
    std::string Levels[] =  {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	while (i < 5)
	{
		if (level.compare(Levels[i]) == 0)
		    break ;
		i++;
	}
    return (i + 1);
}
