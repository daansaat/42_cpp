/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:24:18 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:24:19 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*zombie;
	zombie = newZombie("mary");
	zombie->announce();
	randomChump("eric");
	delete zombie;
	// system("leaks zombie");
	return (0);
}