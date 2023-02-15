/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:54:59 by dsaat         #+#    #+#                 */
/*   Updated: 2023/02/02 13:44:16 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class 	Fixed {

public:

	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(Fixed const &src);
	~Fixed();
	
	Fixed&	operator=(Fixed const &rhs);
	
	bool	operator>(Fixed const &rhs)	const;
	bool	operator<(Fixed const &rhs)	const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	
	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;
	
	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);
	
	static Fixed& min(Fixed& number1, Fixed& number2); 
	static Fixed& max(Fixed& number1, Fixed& number2); 
	static const Fixed& min(Fixed const& number1, Fixed const& number2); 
	static const Fixed& max(Fixed const& number1, Fixed const& number2); 
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
private:

	int					_fixedNumber;
	static const int	_fractionalBitsNumber = 8;
		
};

std::ostream& 	operator<<(std::ostream &os, Fixed const &obj);

#endif