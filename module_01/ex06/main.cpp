/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:25:54 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 13:29:55 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		std::string	level (argv[1]);
		Harl harl;
		harl.complain(level);
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}