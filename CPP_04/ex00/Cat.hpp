#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:

    Cat( void );
    ~Cat();
    Cat( const Cat &src );

    Cat &operator=( const Cat &obj);

    virtual void    makeSound( void ) const;
};

#endif