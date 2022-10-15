/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:54:54 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/14 13:52:13 by daansaat      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	{
	Fixed a;
	Fixed const b( 10 );
	
	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << std::endl;
	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a >= b = " << (a >= b) << std::endl;
	std::cout << "a <= b = " << (a <= b) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl;
	std::cout << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	std::cout << std::endl;	
	}
	
	{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "a   :" << a << std::endl;
	std::cout << "++a :" << ++a << std::endl;
	std::cout << "a   :" << a << std::endl;
	std::cout << "a++ :" << a++ << std::endl;
	std::cout << "a   :" << a << std::endl;
	std::cout << "--a :" << --a << std::endl;
	std::cout << "a   :" << a << std::endl;
	std::cout << "a-- :" << a-- << std::endl;
	std::cout << "a   :" << a << std::endl;
	std::cout << "b   :" << b << std::endl;
	std::cout << std::endl;
	std::cout << "max a b :" << Fixed::max( a, b ) << std::endl;
	std::cout << "min a b :" << Fixed::min( a, b ) << std::endl;
	std::cout << "min b b :" << Fixed::min( b, b ) << std::endl;
	std::cout << "max a a :" << Fixed::max( a, a ) << std::endl;
	}

	return 0;
}