#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:

    WrongCat( void );
    ~WrongCat();
    WrongCat( const WrongCat &src );

    WrongCat    &operator=( const WrongCat &obj );

    virtual void    makeSound( void ) const;
};

#endif