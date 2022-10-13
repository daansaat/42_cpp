/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:54:59 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 13:55:24 by dsaat         ########   odam.nl         */
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
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
	private:
		int					_fixedNumber;
		static const int	_fractionalBitsNumber = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif