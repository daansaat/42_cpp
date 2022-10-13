/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:25:50 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 13:28:51 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class	Harl {
	
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	public:
		void	complain(std::string level);
};

#endif