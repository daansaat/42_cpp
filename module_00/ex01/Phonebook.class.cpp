#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

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

void	Phonebook::add(int index) {
	Contact	contact;

	contact.set_info();
	this->contact[index] = contact;
}

bool	Phonebook::search(void) {
	int	i;
	
	for (i = 0; !contact[i].get_fn().empty() && i < 8; i++) {
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

bool	Phonebook::search(int index) {
	if (contact[index].get_fn().empty())
		return (false);
	else {
		print(contact[index].get_fn(), "First name: ");
		print(contact[index].get_ln(), "Last name: ");
		print(contact[index].get_nn(), "Nickname: ");
		print(contact[index].get_pn(), "Phonenumber: ");
		print(contact[index].get_ds(), "Darkest secret");
	}
	return (true);
}