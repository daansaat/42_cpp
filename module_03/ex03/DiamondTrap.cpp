#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "[DiamondTrap] default constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return;
}


DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), _name(name) {

	std::cout << "[DiamondTrap] string constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->ClapTrap::_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return;
}


DiamondTrap::DiamondTrap(DiamondTrap& src) {

	std::cout << "[DiamondTrap] copy constructor called" << std::endl;
	*this = src;
	return;
}


DiamondTrap::~DiamondTrap() {

	std::cout << "[DiamondTrap] destructor called" << std::endl;
	return;
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {

	std::cout << "[DiamondTrap] assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}


void DiamondTrap::attack(const std::string& target) {

	ScavTrap::attack(target);
	return;
}


void DiamondTrap::whoAmI() {

	std::cout << CYAN << "My name is " << _name << ", my ClapTrap name is " << ClapTrap::_name << "." << RESET << std::endl;
	return;
}


