#include "FragTrap.hpp"

FragTrap::FragTrap() {

	std::cout << "[FragTrap] default constructor called" << std::endl;
	this->set_hitPoints(100);
	this->set_energyPoints(100);
	this->set_attackDamage(30);
	return;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	std::cout << "[FragTrap] string constructor called" << std::endl;
	this->set_hitPoints(100);
	this->set_energyPoints(100);
	this->set_attackDamage(30);
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
	this->set_name(rhs.get_name());
	this->set_hitPoints(rhs.get_hitPoints());
	this->set_energyPoints(rhs.get_energyPoints());
	this->set_attackDamage(rhs.get_attackDamage());
	return *this;
}


void FragTrap::attack(const std::string& target) {

	if (this->get_hitPoints() == 0)
		print_noPoints("[CAN'T ATTACK] ", "hit points.");
	else if (this->get_energyPoints() == 0)
		print_noPoints("[CAN'T ATTACK] ", "energy points.");
	else {
		std::cout << CYAN << "FragTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attackDamage() << " points of damage! " << RESET;
		this->set_energyPoints(this->get_energyPoints() - 1);
		std::cout << "[ep: " << this->get_energyPoints() << "]" << std::endl;
	}
	return;
}


void FragTrap::highFivesGuys(void) {

	std::cout << CYAN << this->get_name() << " is requesting a positive high five!" << RESET << std::endl;
	return;
}