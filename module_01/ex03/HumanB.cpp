/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:25:02 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:25:03 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _weapon(NULL), _name(name) {
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void	HumanB::attack() {
	std::cout << _name << " attacks with their weapon ";
	if (_weapon)
		std::cout << _weapon->getType() << std::endl;
	else
		std::cout << "empty hands" << std::endl;
}