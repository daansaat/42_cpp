#include "Dog.hpp"

Dog::Dog() {

	std::cout << "[Dog] default constructor called." << std::endl;
	this->brain = new Brain();
	this->type = "dog";
	return;
}


Dog::Dog(const Dog& src) {

	std::cout << "[Dog] copy constructor called." << std::endl;
	this->brain = new Brain();
	*this = src;
	return;
}


Dog::~Dog() {

	std::cout << RED << "[Dog] destructor called." << RESET << std::endl;
	delete brain;
	return;
}


Dog& Dog::operator=(const Dog& rhs) {

	std::cout << "[Dog] assignment operator called." << std::endl;
	*(this->brain) = *(rhs.brain);
	this->type = rhs.type;
	return *this;
}


void Dog::makeSound() const {

	std::cout << "woef" << std::endl;
	return;
}


void Dog::setIdeas(size_t i, std::string idea) {

	brain->setIdea(i, idea);
	return;
}


void Dog::getIdeas() {
	
	for (int i = 0; i < 100; i++) {
		if (!brain->getIdea(i).empty()) {
			std::cout << CYAN << brain->getIdea(i) << "... " RESET;
		}
	}
	return;
}