#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

class Animal
{
protected:
    std::string type;
private:

public:
    virtual ~Animal() = 0;

    virtual Animal	&operator=( const Animal &other );

    virtual void    makeSound( void ) const = 0;

    virtual const   std::string &getType( void ) const = 0;

    virtual Brain *getBrain( void ) const = 0;
};

#endif