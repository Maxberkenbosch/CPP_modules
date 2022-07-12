#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;
private:

public:
    Animal( void );
    virtual ~Animal();
    Animal( const Animal &src);

    Animal	&operator=( const Animal &other );

    virtual void    makeSound( void ) const;

    const   std::string &getType( void ) const ;
};

#endif