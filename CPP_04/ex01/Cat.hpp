#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:

Brain   *brain;

public:

    Cat( void );
    ~Cat();
    Cat( const Cat &src );

    virtual void    makeSound( void ) const;

    const std::string   &getType( void ) const;

    virtual Cat &operator=( Cat const &ref);

    virtual Brain *getBrain( void ) const;
};

#endif