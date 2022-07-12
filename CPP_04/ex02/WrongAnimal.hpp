#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
protected:
    std::string type;
private:

public:
    WrongAnimal( void );
    virtual ~WrongAnimal();
    WrongAnimal( const WrongAnimal &ref );

    WrongAnimal &operator=( const WrongAnimal &obj );

    virtual void    makeSound( void ) const;

    const   std::string &getType( void ) const ;
};

#endif