#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>

class Convert
{
private:
    std::string _input;
    char        _character;
    int         _numInt;
    double      _numDouble;
    float       _numFloat;
public:
    Convert( void );
    ~Convert();
    Convert( std::string input );

    std::string detectType( void );
    void        convertInput( void );
    void        CheckOverflow( void );

    void        convertPseudo( std::string type );
    void        convertChar( void );
    void        convertInt( void );
    void        convertFloat( void );
    void        convertDouble( void );
    void        printResult( void );
    
    class ErrorException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

    class ArgcException : public std::exception{
        virtual const char* what() const throw();
    };

    class OverflowException : public std::exception{
        virtual const char* what() const throw();
    };
};

int     ft_strlen( std::string input);
bool    isDigit( char c );

#endif