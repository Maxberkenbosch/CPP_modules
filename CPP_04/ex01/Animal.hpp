#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

class Animal
{
protected:
    std::string type;
private:

public:
    Animal( void );
    virtual ~Animal();
    Animal( const Animal &src);

    virtual Animal	&operator=( const Animal &obj );

    virtual void    makeSound( void ) const;

    virtual const   std::string &getType( void ) const ;

    virtual Brain *getBrain( void ) const = 0;
};

#endif