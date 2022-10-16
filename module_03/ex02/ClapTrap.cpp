#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "Default constructor called" << std::endl;
	return;
}


ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "String constructor called" << std::endl;
	return;
}


ClapTrap::ClapTrap(const ClapTrap& src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}


ClapTrap::~ClapTrap() {

	std::cout << "Destructor called" << std::endl;
	return;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {

	std::cout << "Assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}


void ClapTrap::set_name(std::string name) {

	this->_name = name;
}


void ClapTrap::set_hitPoints(unsigned int value) {

	this->_hitPoints = value;
}


void ClapTrap::set_energyPoints(unsigned int value) {

	this->_energyPoints = value;
}


void ClapTrap::set_attackDamage(unsigned int value) {

	this->_attackDamage = value;
}


std::string ClapTrap::get_name(void) const {

	return _name;
}


unsigned int ClapTrap::get_hitPoints(void) const {

	return _hitPoints;
}


unsigned int ClapTrap::get_energyPoints(void) const {

	return _energyPoints;
}


unsigned int ClapTrap::get_attackDamage(void) const {

	return _attackDamage;
}


void ClapTrap::print_noPoints(std::string action, std::string points) {

	std::cout << RED << action << this->_name << " is out of " << points << RESET << std::endl;
	return;
}


void ClapTrap::attack(const std::string& target) {

	if (this->_hitPoints == 0)
		print_noPoints("[CAN'T ATTACK] ", "hit points.");
	else if (this->_energyPoints == 0)
		print_noPoints("[CAN'T ATTACK] ", "energy points.");
	else {
		std::cout << CYAN << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! " << RESET;
		this->_energyPoints -= 1;
		std::cout << "[ep: " << this->_energyPoints << "]" << std::endl;
	}
	return;
}


void ClapTrap::takeDamage(unsigned int amount) {

	if (this->_hitPoints == 0) {
		print_noPoints("[CAN'T TAKE DAMAGE] ", "hit points.");
		return;
	}
	std::cout << CYAN << this->_name << " takes " << amount << " points of damage! " << RESET;
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "[hp: " << this->_hitPoints << "]" << std::endl;
	return;
}


void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_hitPoints <= 0)
		print_noPoints("[CAN'T REPAIR] ", "hit points.");
	else if (this->_energyPoints == 0)
		print_noPoints("[CAN'T REPAIR] ", "energy points.");
	else {
		std::cout << GREEN << this->_name << " repairs itself for " << amount << "." << RESET;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		std::cout << " [hp: " << this->_hitPoints << "]";
		std::cout << " [ep: " << this->_energyPoints << "]" << std::endl;
	}
	return;
}

