#include "Cat.hpp"

Cat::Cat() {

	std::cout << "[Cat] default constructor called." << std::endl;
	this->type = "cat";
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


WrongCat::WrongCat() {

	std::cout << "[WrongCat] default constructor called." << std::endl;
	this->type = "wrongcat";
	return;
}


WrongCat::WrongCat(const WrongCat& src) {

	std::cout << "[WrongCat] copy constructor called." << std::endl;
	*this = src;
	return;
}


WrongCat::~WrongCat() {

	std::cout << "[WrongCat] destructor called." << std::endl;
	return;
}


WrongCat& WrongCat::operator=(const WrongCat& rhs) {

	std::cout << "[WrongCat] assignment operator called." << std::endl;
	this->type = rhs.type;
	return *this;
}


void WrongCat::makeSound() const {

	std::cout << "meouw" << std::endl;
	return;
}
