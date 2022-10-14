/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:24:45 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:24:46 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

	std::string name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	giveName(std::string name);
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );
Zombie  *zombieHorde( int N, std::string name );

#endif