#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {

public:

	Point();
	Point(float const x, float const y);
	Point(Point const &src);
	~Point();

	Point& operator=(Point& rhs);

	const Fixed getX(void) const;
	const Fixed getY(void) const;

private:

	Fixed const _x;
	Fixed const _y;

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif