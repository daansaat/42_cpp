#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

void	Phonebook::add(int index) {
	Contact	contact;

	contact.set_info();
	this->contact[index] = contact;
}

static std::string	truncate(std::string str) {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

bool	Phonebook::search(void) {
	int	i;
	
	for (i = 0; !contact[i].get_fn().empty() && i < 8; i++) {
		std::cout << std::setw(10) << i + 1 << " | ";
		std::cout << std::setw(10) << truncate(contact[i].get_fn()) << " | ";
		std::cout << std::setw(10) << truncate(contact[i].get_ln()) << " | ";
		std::cout << std::setw(10) << truncate(contact[i].get_nn()) << std::endl;
	}
	if (i == 0)
		return (false);
	return (true);
}

bool	Phonebook::search(int index) {
	if (contact[index].get_fn().empty())
		return (false);
	else {
		std::cout << "First name: " << contact[index].get_fn() << std::endl;
		std::cout << "Last name: " << contact[index].get_ln() << std::endl;
		std::cout << "Nickname: " << contact[index].get_nn() << std::endl;
		std::cout << "Phonenumber: " << contact[index].get_pn() << std::endl;
		std::cout << "Darkest Secret: " << contact[index].get_ds() << std::endl;
	}
	return (true);
}