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


void Cat::setIdeas(size_t i, std::string idea) {

	brain->setIdea(i, idea);
	return;
}


void Cat::getIdeas() {
	
	for (int i = 0; i < 100; i++) {
		if (!brain->getIdea(i).empty()) {
			std::cout << CYAN << brain->getIdea(i) << "... " RESET;
		}
	}
	return;
}
