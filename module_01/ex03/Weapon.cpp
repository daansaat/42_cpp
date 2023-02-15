/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:25:12 by dsaat         #+#    #+#                 */
/*   Updated: 2023/02/01 13:45:08 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon) {
}

const std::string&	Weapon::getType(void) {
	return (_type);
}

void	Weapon::setType(std::string weapon) {
	_type = weapon;
}