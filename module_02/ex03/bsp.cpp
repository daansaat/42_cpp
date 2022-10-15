#include "Point.hpp"

void	calculate_w1_and_w2(Point const a, Point const b, Point const c, Point const point, Fixed& w1, Fixed& w2) {

	Fixed Ax = a.getX();
	Fixed Ay = a.getY();
	Fixed Bx = b.getX();
	Fixed By = b.getY();
	Fixed Cx = c.getX();
	Fixed Cy = c.getY();
	Fixed Px = point.getX();
	Fixed Py = point.getY();

	w1 = ((Ax * (Cy - Ay) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay)) / ((By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay)));
	w2 = ((Py - Ay - w1 * (By - Ay)) / (Cy - Ay));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

	Fixed w1;
	Fixed w2;
	
	calculate_w1_and_w2(a, b, c, point, w1, w2);
	return w1 > 0 && w2 > 0 && (w1 + w2) < 1;
}
