#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string> 

class Brain
{
private:
public:
    std::string ideas[100];

    Brain( void );
    ~Brain();
    Brain( const Brain &obj );

    Brain   &operator=( const Brain &obj );
};

#endif
