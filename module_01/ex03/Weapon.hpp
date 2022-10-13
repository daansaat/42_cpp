/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:25:15 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:25:16 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	
	std::string	_type;
	public:
		Weapon(std::string weapon);
		const std::string&	getType(void);
		void				setType(std::string weapon);
};

#endif