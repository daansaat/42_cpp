#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {

	std::cout << "[WrongAnimal] default constructor called." << std::endl;
	return;
}


WrongAnimal::WrongAnimal(const WrongAnimal& src) {

	std::cout << "[WrongAnimal] copy constructor called." << std::endl;
	*this = src;
	return;
}


WrongAnimal::~WrongAnimal() {

	std::cout << "[WrongAnimal] destructor called." << std::endl;
	return;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {

	std::cout << "[WrongAnimal] assignment operator called." << std::endl;
	this->type = rhs.type;
	return *this;
}


void WrongAnimal::makeSound() const {

	std::cout << "..." << std::endl;
	return;
}


std::string WrongAnimal::getType(void) const {

	return this->type;
}