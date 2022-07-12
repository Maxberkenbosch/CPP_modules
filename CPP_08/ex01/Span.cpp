#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span( void ): maxNumInt(0)
{
    std::cout << "Default constructor for Span called." << std::endl;
}

Span::~Span( void )
{
    std::cout << "Destructor for Span called." << std::endl;
}

Span::Span( const unsigned int &num ): maxNumInt(num)
{
    std::cout << "maxNumInt constructor for Span called." << std::endl;
}

Span::Span( const Span &ref )
{
    std::cout << "Copy constructor for Span called." << std::endl;
    *this = ref;
}

Span    &Span::operator=( const Span &ref )
{
    std::cout << "Assignment copy constructor for Span called." << std::endl;
    if (this == &ref)
        return (*this);
    this->maxNumInt = ref.maxNumInt;
    this->_storage = ref._storage;
    return (*this);
}

void    Span::addNumber( const int &number )
{
    try
    {
        if (this->_storage.size() == this->maxNumInt)
            throw std::length_error("The maximum amount of integers has been stored.");
        this->_storage.push_back(number);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int rondomNum( void )
{
    return (rand() % 10 + 1);
}

void    Span::rangeOfIterators( const unsigned int n )
{
    try
    {
        if (n > maxNumInt)
            throw std::length_error("The amount of integers is more than the maximum anoumt of integers.");
        std::vector<int> myvector (n,1);
        std::generate_n(myvector.begin(), n, rondomNum);
        this->_storage = myvector;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int    Span::shortestSpan()
{
    std::vector<int>            temp = _storage;
    std::vector<int>::iterator  iter;
    int                         result = 0;
    int                         difference = 0;

    try
    {
        if (temp.size() == 0 || temp.size() == 1)
            throw std::logic_error("Span contains too few integers to calculate the shortest span.");
        sort(temp.begin(), temp.end());
        for (iter = temp.begin() + 1; iter != temp.end() - 1; iter++)
        {
            difference = (*iter + 1) - *iter;
            if (difference > result)
                result = difference;
        }
        return (result);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (result);
}

int    Span::longestSpan()
{
    std::vector<int>::iterator  smallest = min_element(_storage.begin(), _storage.end());
    std::vector<int>::iterator  largest = max_element(_storage.begin(), _storage.end());

    try
    {
        if (_storage.size() == 0 || _storage.size() == 1)
            throw std::logic_error("Span contains too few integers to calculate the longest span.");
        return (*largest - *smallest);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
