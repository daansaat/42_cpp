/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:24:34 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:24:35 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif