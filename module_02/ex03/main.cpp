/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:54:54 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/15 19:33:22 by daansaat      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
		
	Point P1;
	Point P2(3.1f, 0.5f);
	Point P3(1, 4);
	
	Point Ta(0, 0);
	Point Tb(5.12, 4.16);
	Point Tc(1.18, -6.49);

	// One of the vertexes
	std::cout << std::endl << "Triangle:";
	std::cout << " a[" << Ta.getX() << ", " << Ta.getY();
	std::cout << "] b[" << Tb.getX() << ", " << Tb.getY();
	std::cout << "] c[" << Tc.getX() << ", " << Tc.getY() << "]" << std::endl;
	std::cout << std::endl;
	std::cout << "P1: one of the vertexes, should be false" << std::endl;
	std::cout << "x: " << P1.getX() << " y: " << P1.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P1) << std::endl;

	// Inside the triangle
	std::cout << std::endl;
	std::cout << "P2: inside the triangle, should be true" << std::endl;
	std::cout << "x: " << P2.getX() << " y: " << P2.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P2) << std::endl;
	
	// Outside the triangle
	std::cout << std::endl;
	std::cout << "P3: outside the triangle, should be false" << std::endl;
	std::cout << "x: " << P3.getX() << " y: " << P3.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P3) << std::endl;
	std::cout << std::endl;
	
	return 0;
}