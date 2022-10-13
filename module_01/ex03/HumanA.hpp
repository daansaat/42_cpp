/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:25:00 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:25:01 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{
	
	Weapon&		_weapon;
	std::string	_name;
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack();
};

#endif