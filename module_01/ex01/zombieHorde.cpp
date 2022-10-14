/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:24:48 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:24:49 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name) {
	Zombie  *zombie = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombie[i].giveName(name);
	}
	return (zombie);
}