/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:24:56 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:24:57 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) 
: _weapon(weapon), _name(name) {
}

void	HumanA::attack() {
	std::cout << _name << " attacks with their weapon ";
	std::cout << _weapon.getType() << std::endl;
}