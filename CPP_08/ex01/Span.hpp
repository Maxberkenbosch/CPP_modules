#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
#include <cstdlib>
# include <vector>

class Span
{
private:
    unsigned int  maxNumInt;
    std::vector<int>    _storage;
    
public:
    Span( void );
    ~Span( void );
    Span( const unsigned int &num );

    Span( const Span &ref );
    Span    &operator=( const Span &ref );

    void    addNumber( const int &number );
    void    rangeOfIterators( const unsigned int n );
    int     shortestSpan();
    int     longestSpan();
};

#endif