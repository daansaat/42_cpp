#include "Animal.hpp"

AAnimal::AAnimal() : type("Aanimal") {

	std::cout << "[AAnimal] default constructor called." << std::endl;
	return;
}


AAnimal::AAnimal(const AAnimal& src) {

	std::cout << "[AAnimal] copy constructor called." << std::endl;
	*this = src;
	return;
}


AAnimal::~AAnimal() {

	std::cout << RED << "[AAnimal] destructor called." << RESET << std::endl;
	return;
}


AAnimal& AAnimal::operator=(const AAnimal& rhs) {

	std::cout << "[AAnimal] assignment operator called." << std::endl;
	this->type = rhs.type;
	return *this;
}


void AAnimal::makeSound() const {

	std::cout << "..." << std::endl;
	return;
}


std::string AAnimal::getType(void) const {

	return this->type;
}
