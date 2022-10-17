#include "Cat.hpp"

Cat::Cat() {

	std::cout << "[Cat] default constructor called." << std::endl;
	this->brain = new Brain();
	this->type = "cat";
	return;
}


Cat::Cat(const Cat& src) {

	std::cout << "[Cat] copy constructor called." << std::endl;
	this->brain = new Brain();
	*this = src;
	return;
}


Cat::~Cat() {

	std::cout << RED << "[Cat] destructor called." << RESET<< std::endl;
	delete brain;
	return;
}


Cat& Cat::operator=(const Cat& rhs) {

	std::cout << "[Cat] assignment operator called." << std::endl;
	*(this->brain) = *(rhs.brain);
	this->type = rhs.type;
	return *this;
}


void Cat::makeSound() const {

	std::cout << "meouw" << std::endl;
	return;
}


void Cat::getIdeas() {

	for (int i = 0; i < 100 && brain->ideas[i] != "\0"; i++) {
		std::cout << CYAN << brain->ideas[i] << RESET;
	}
	std::cout << std::endl;
}


void Cat::setIdeas(std::string str) {

	int i;

	for (i = 0; i < 100 && i < str.length(); i++) {
		this->brain->ideas[i] = str[i];
	}
	this->brain->ideas[i] = "\0";
	return;
}


//####################################################################//


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
