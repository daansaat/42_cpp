/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:11:53 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/12 19:24:53 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iomanip>
#include <sstream>

#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

Phonebook::Phonebook(int index) {
	this->index = index;
}

static std::string	truncate(std::string str) {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

static void	print(std::string field) {
	std::cout << std::setw(10) << truncate(field) << " | ";
}

static void	print(int index) {
	std::cout << std::setw(10) << index << " | ";
}

static void	print(std::string field, const char *str) {
	std::cout << str << field << std::endl;
}

static int	print(const char *color, const char *text) {
	std::cout << color << text << RESET;
	return (0);
}

static bool	get_integer(int *index) {
	std::string input;
	getline(std::cin, input);
	if (!std::cin)
		std::exit(EXIT_SUCCESS);
	std::stringstream converter(input);
	int result;
	if (converter >> result) {
		char remaining;
		if (converter >> remaining) {
			return (false);
		}
		*index = result;
		return (true);
	}
	return (false);
}

void	Phonebook::add() {
	Contact	contact;

	contact.set_info();
	this->contact[index] = contact;
	index = (index + 1) % 8;
	print(BLACK, "Contact added to phonebook\n");
}

bool	Phonebook::print_phonebook(void) {
	int	i;
	
	for (i = 0; i < 8 && !contact[i].get_fn().empty(); i++) {
		print(i + 1);
		print(contact[i].get_fn());
		print(contact[i].get_ln());
		print(contact[i].get_nn()); 
		std::cout << std::endl;
	}
	if (i == 0)
		return (false);
	return (true);
}

bool	Phonebook::print_contact(int index) {
	if (contact[index].get_fn().empty())
		return (false);
	else {
		print(contact[index].get_fn(), "\nFirst name: ");
		print(contact[index].get_ln(), "Last name: ");
		print(contact[index].get_nn(), "Nickname: ");
		print(contact[index].get_pn(), "Phonenumber: ");
		print(contact[index].get_ds(), "Darkest secret: ");
	}
	return (true);
}

int	Phonebook::search() {
	int	index;

	if (!print_phonebook())
		return (print(BLACK, "No saved contacts.\n"));
	print(BLACK, "Select index to view entry: "); 
	while (!get_integer(&index) || index < 1 || index > 8) {
		print(RED, "invalid index\n");
		print(BLACK, "Select index to view entry: "); 	
	}
	if (!print_contact(index - 1))
		return (print(BLACK, "No entry.\n"));
	return (0);
}
