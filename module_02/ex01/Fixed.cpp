#include "Fixed.hpp"

Fixed::Fixed(void)
: _fixedNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
: _fixedNumber(value * (1 << _fractionalBitsNumber)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
: _fixedNumber(roundf(value * (1 << _fractionalBitsNumber))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedNumber = obj.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	return os << obj.toFloat();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return _fixedNumber;
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixedNumber = raw;
}

float	Fixed::toFloat(void) const {
	return (float)_fixedNumber / (1 << _fractionalBitsNumber);
}

int		Fixed::toInt(void) const {
	return _fixedNumber / (1 << _fractionalBitsNumber);
}
