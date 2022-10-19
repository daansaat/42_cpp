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


WrongAnimal::WrongAnimal() : type("wronganimal") {

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