#include "FragTrap.hpp"

FragTrap::FragTrap() {

	std::cout << "[FragTrap] default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	std::cout << "[FragTrap] string constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}


FragTrap::FragTrap(const FragTrap& src) {

	std::cout << "[FragTrap] copy constructor called" << std::endl;
	*this = src;
}


FragTrap::~FragTrap() {

	std::cout << "[FragTrap] destructor called" << std::endl;
	return;
}


FragTrap& FragTrap::operator=(const FragTrap& rhs) {

	std::cout << "[FragTrap] assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}


void FragTrap::attack(const std::string& target) {

	if (this->get_hitPoints() == 0)
		print_noPoints("[CAN'T ATTACK] ", "hit points.");
	else if (this->get_energyPoints() == 0)
		print_noPoints("[CAN'T ATTACK] ", "energy points.");
	else {
		std::cout << CYAN << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! " << RESET;
		this->_energyPoints -= 1;
		std::cout << "[ep: " << this->_energyPoints << "]" << std::endl;
	}
	return;
}


void FragTrap::highFivesGuys(void) {

	std::cout << CYAN << this->_name << " is requesting a positive high five!" << RESET << std::endl;
	return;
}