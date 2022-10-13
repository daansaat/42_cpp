/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:24:38 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:24:39 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	int	N = 7;
	Zombie	*zombie;
	zombie = zombieHorde(N, "michel");
	for (int i = 0; i < N; i++) {
		std::cout << "[" << i + 1 << "] ";
		zombie[i].announce();
	}
	delete[] zombie;
	// system("leaks zombie");
	return (0);
}