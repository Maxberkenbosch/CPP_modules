#include "easyfind.hpp"
#include <array>
#include <vector>
#include <iostream>

const char *findError::what() const throw()
{
	return ("Integer does not exist in given container.\n");
}

int main(void)
{
    std::array<int, 5>          ar1 = {{3, 4, 5, 1, 2}};
    int                         *ptr;
    std::vector<int>            g1;
    std::vector<int>::iterator  iter;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    try
    {
        ptr = easyFind(ar1, 6);
        std::cout << *ptr << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        iter = easyFind(g1, 3);
        std::cout << *iter << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}