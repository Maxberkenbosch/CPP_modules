#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
public:
    Dog( void );
    ~Dog();
    Dog( const Dog &src );

    Dog &operator=( const Dog &obj );

    void    makeSound( void ) const;
};

#endif