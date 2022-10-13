/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:25:05 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:25:06 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
	
	Weapon*		_weapon;
	std::string	_name;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif
