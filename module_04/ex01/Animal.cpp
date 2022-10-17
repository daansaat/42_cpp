#include "Animal.hpp"

Animal::Animal() : type("animal") {

	std::cout << "[Animal] default constructor called." << std::endl;
	return;
}


Animal::Animal(const Animal& src) {

	std::cout << "[Animal] copy constructor called." << std::endl;
	*this = src;
	return;
}


Animal::~Animal() {

	std::cout << RED << "[Animal] destructor called." << RESET << std::endl;
	return;
}


Animal& Animal::operator=(const Animal& rhs) {

	std::cout << "[Animal] assignment operator called." << std::endl;
	this->type = rhs.type;
	return *this;
}


void Animal::makeSound() const {

	std::cout << "..." << std::endl;
	return;
}


std::string Animal::getType(void) const {

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