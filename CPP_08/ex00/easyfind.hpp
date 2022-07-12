#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <algorithm>

class findError : public std::exception{
    const char* what() const throw();
};

template <typename T>
typename T::iterator    easyFind( T container, int target )
{
    typename T::iterator result = std::find(container.begin(), container.end(), target);
    if (result != container.end())
        return (result);
    throw findError();
}

#endif