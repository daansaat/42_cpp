/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:24:52 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 12:24:53 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void) {

	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::endl;
	std::cout << std::setw(35) << std::left << "memory address of the string: " << &str << std::endl;
	std::cout << std::setw(35) << std::left << "memory adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(35) << std::left << "memory adress held by stringREF: " << &stringREF << std::endl;
	std::cout << std::setw(35) << std::left << "value of the string: " << str << std::endl;
	std::cout << std::setw(35) << std::left << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << std::setw(35) << std::left << "value pointed to by stringREF: " << stringREF << std::endl;
	std::cout << std::endl;

	return (0);
}