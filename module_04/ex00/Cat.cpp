#include "Cat.hpp"

Cat::Cat() {

	std::cout << "[Cat] default constructor called." << std::endl;
	this->type = "Cat";
	return;
}


Cat::Cat(const Cat& src) {

	std::cout << "[Cat] copy constructor called." << std::endl;
	*this = src;
	return;
}


Cat::~Cat() {

	std::cout << "[Cat] destructor called." << std::endl;
	return;
}


Cat& Cat::operator=(const Cat& rhs) {

	std::cout << "[Cat] assignment operator called." << std::endl;
	this->type = rhs.type;
	return *this;
}


void Cat::makeSound() const {

	std::cout << "meouw" << std::endl;
	return;
}


