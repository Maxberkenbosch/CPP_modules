#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog( void );
    ~Dog();
    Dog(const Dog &src);

    void    makeSound( void ) const;
    
    virtual Dog &operator=( Dog const &ref);

    const std::string   &getType( void ) const;

    virtual Brain *getBrain( void ) const;

};

#endif