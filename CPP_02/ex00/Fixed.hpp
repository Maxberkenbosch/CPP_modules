#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{

public:

	Fixed( void );
	Fixed( const Fixed &src );
	~Fixed( void );

	Fixed	&operator=( const Fixed &obj );

	int		getRawBits( void ) const;
	void	setRawBits( const int rawBits );

private:

	int					_fixedPointValue;
	static const int	_numFractBits = 8;
};

#endif
