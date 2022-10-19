#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("", 145, 137) {

	std::cout << "[SCF] default constructor called." << std::endl;
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
: Form(name, 145, 137) {

	std::cout << "[SCF] default constructor called." << std::endl;
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) {

	std::cout << "[SCF] copy constructor called." << std::endl;
}



ShrubberyCreationForm::~ShrubberyCreationForm() {

	std::cout << "[SCF] destructor called." << std::endl;
	return;
}