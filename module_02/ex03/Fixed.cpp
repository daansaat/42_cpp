/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:54:57 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/14 13:49:23 by daansaat      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: _fixedNumber(0) {
	
	// std::cout << "Default constructor called" << std::endl;
	return;
}


Fixed::Fixed(const int value)
: _fixedNumber(value * (1 << _fractionalBitsNumber)) {
	
	// std::cout << "Int constructor called" << std::endl;
	return;
}


Fixed::Fixed(const float value)
: _fixedNumber(roundf(value * (1 << _fractionalBitsNumber))) {
	
	// std::cout << "Float constructor called" << std::endl;
	return;
}


Fixed::Fixed(const Fixed &src) {
	
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}


Fixed::~Fixed() {
	
	// std::cout << "Destructor called" << std::endl;
	return;
}


Fixed&	Fixed::operator=(const Fixed &rhs) {
	
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedNumber = rhs.getRawBits();
	return *this;
}


bool	Fixed::operator>(Fixed const &rhs) const {

	return this->_fixedNumber > rhs._fixedNumber;
}


bool	Fixed::operator<(Fixed const &rhs) const {

	return this->_fixedNumber < rhs._fixedNumber;
}


bool	Fixed::operator>=(Fixed const &rhs) const {

	return this->_fixedNumber >= rhs._fixedNumber;
}


bool	Fixed::operator<=(Fixed const &rhs) const {

	return this->_fixedNumber <= rhs._fixedNumber;
}


bool	Fixed::operator==(Fixed const &rhs) const {

	return this->_fixedNumber == rhs._fixedNumber;
}


bool	Fixed::operator!=(Fixed const &rhs) const {

	return this->_fixedNumber != rhs._fixedNumber;
}


Fixed	Fixed::operator+(Fixed const &rhs) const {
	
	Fixed result(this->toFloat() + rhs.toFloat());
	return result;
}


Fixed	Fixed::operator-(Fixed const &rhs) const {
	
	Fixed result(this->toFloat() - rhs.toFloat());
	return result;
}


Fixed	Fixed::operator*(Fixed const &rhs) const {
	
	Fixed result(this->toFloat() * rhs.toFloat());
	return result;
}


Fixed	Fixed::operator/(Fixed const &rhs) const {
	
	Fixed result(this->toFloat() / rhs.toFloat());
	return result;
}


Fixed	Fixed::operator++(void) {
	
	this->_fixedNumber++;
	return *this;
}


Fixed	Fixed::operator++(int) {

	Fixed temp(*this);
	this->_fixedNumber++;
	return temp;
}


Fixed	Fixed::operator--(void) {
	
	this->_fixedNumber--;
	return *this;
}


Fixed	Fixed::operator--(int) {

	Fixed temp(*this);
	this->_fixedNumber--;
	return temp;
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj) {
	
	os << obj.toFloat();
	return os;
}


Fixed& Fixed::min(Fixed& number1, Fixed& number2) {
	
	if (number1 < number2)
		return number1;
	return number2; 
}


Fixed& Fixed::max(Fixed& number1, Fixed& number2) {
	
	if (number1 > number2)
		return number1;
	return number2; 
}


const Fixed& Fixed::min(Fixed const & number1, Fixed const & number2) {

	if (number1 < number2)
		return number1;
	return number2;
}


const Fixed& Fixed::max(Fixed const & number1, Fixed const & number2) {

	if (number1 > number2)
		return number1;
	return number2;
}


int	Fixed::getRawBits(void) const {
	
	// std::cout << "getRawBits member function called" << std::endl;
	return _fixedNumber;
}


void	Fixed::setRawBits(int const raw) {
	
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixedNumber = raw;
	return;
}


float	Fixed::toFloat(void) const {
	
	return (float)_fixedNumber / (1 << _fractionalBitsNumber);
}


int		Fixed::toInt(void) const {
	
	return _fixedNumber / (1 << _fractionalBitsNumber);
}
