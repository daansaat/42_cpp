#include "Point.hpp"

Point::Point(): _x(0), _y(0) {

	// std::cout << "Default constructor called" << std::endl;
	return;
}


Point::Point(float const x, float const y): _x(x), _y(y) {

	// std::cout << "Float constructor called" << std::endl;
	return;
}


Point::Point(Point const &src) : _x(src.getX()), _y(src.getY()) {

	// std::cout << "Copy constructor called" << std::endl;
	return;
}


Point::~Point() {

	// std::cout << "Destructor called" << std::endl;
	return;
}


Point& Point::operator=(Point& rhs) {

	// std::cout << "Assignment operator called" << std::endl;
	return rhs;
}


const Fixed	Point::getX(void) const {

	return _x;
}


const Fixed	Point::getY(void) const {

	return _y;
}
