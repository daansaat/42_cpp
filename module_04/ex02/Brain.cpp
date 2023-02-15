#include "Brain.hpp"

Brain::Brain() {

	std::cout << GREEN << "[Brain] default constructor called." << RESET << std::endl;
	return;
}


Brain::Brain(const Brain& src) {

	std::cout << GREEN << "[Brain] copy constructor called." << RESET << std::endl;
	*this = src;
	return;
}


Brain::~Brain() {

	std::cout << RED << "[Brain] destructor called." << RESET << std::endl;
	return;
}


Brain& Brain::operator=(const Brain& rhs) {

	std::cout << GREEN << "[Brain] assignment operator called." << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}


void Brain::setIdea(size_t i, std::string idea) {

	ideas[i] = idea;
	return;
}


const std::string Brain::getIdea(size_t i) const {

	return ideas[i];
}