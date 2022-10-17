#include "Dog.hpp"

Dog::Dog() {

	std::cout << "[Dog] default constructor called." << std::endl;
	this->type = "dog";
	return;
}


Dog::Dog(const Dog& src) {

	std::cout << "[Dog] copy constructor called." << std::endl;
	*this = src;
	return;
}


Dog::~Dog() {

	std::cout << "[Dog] destructor called." << std::endl;
	return;
}


Dog& Dog::operator=(const Dog& rhs) {

	std::cout << "[Dog] assignment operator called." << std::endl;
	this->type = rhs.type;
	return *this;
}


void Dog::makeSound() const {

	std::cout << "woef" << std::endl;
	return;
}
