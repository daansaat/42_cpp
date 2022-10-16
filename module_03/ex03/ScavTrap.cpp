#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	std::cout << "[ScavTrap] default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return;
}


ScavTrap::ScavTrap(std::string name)
: ClapTrap(name) {

	std::cout << "[ScavTrap] string constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return;
}


ScavTrap::ScavTrap(const ScavTrap& src) {

	std::cout << "[ScavTrap] copy constructor called" << std::endl;
	*this = src;
	return;
}


ScavTrap::~ScavTrap() {

	std::cout << "[ScavTrap] destructor called" << std::endl;
	return;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {

	std::cout << "[ScavTrap] assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}


void ScavTrap::attack(const std::string& target) {

	if (this->get_hitPoints() == 0)
		print_noPoints("[CAN'T ATTACK] ", "hit points.");
	else if (this->get_energyPoints() == 0)
		print_noPoints("[CAN'T ATTACK] ", "energy points.");
	else {
		std::cout << CYAN << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! " << RESET;
		this->_energyPoints -= 1;
		std::cout << "[ep: " << this->_energyPoints << "]" << std::endl;
	}
	return;
}


void ScavTrap::guardGate(void) {

	std::cout << CYAN << this->_name << " is now in Gate Keeper mode." << RESET << std::endl;
	return;
}
