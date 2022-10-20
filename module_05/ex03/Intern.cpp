#include "Intern.hpp"

Intern::Intern() {

	std::cout << GREY << "[Intern] Default constructor called." << RESET << std::endl;
	return;
}


Intern::Intern(const Intern& src) {

	std::cout << GREY << "[Intern] Copy constructor called." << RESET << std::endl;
	*this = src;
	return;
}


Intern::~Intern() {

	std::cout << GREY << "[Intern] Destructor called." << RESET << std::endl;
	return;
}


Intern& Intern::operator=(Intern const & rhs) {

	(void)rhs;
	std::cout << GREY << "[Intern] Assignment operator called." << RESET << std::endl;
	return *this;
}


Form* Intern::makeForm(std::string name, std::string target) {

	std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i;
	for (i = 0; i < 3; i++) {

		if (form[i] == name) {
			std::cout << "Intern creates " << name << std::endl;
			break;
		}
	}
	switch(i) {

		case (0) : 
			return new ShrubberyCreationForm(target);
		case (1) :
			return new RobotomyRequestForm(target);
		case (2) :
			return new PresidentialPardonForm(target);
		default  :
			std::cout << "Could not create form, does not exist." << std::endl;
	}
	return NULL;
}