#include "WrongCat.hpp"

WrongCat::WrongCat() {

	std::cout << "[WrongCat] default constructor called." << std::endl;
	this->type = "WrongCat";
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
