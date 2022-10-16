#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	std::cout << "[ScavTrap] default constructor called" << std::endl;
	this->set_hitPoints(100);
	this->set_energyPoints(50);
	this->set_attackDamage(20);
	return;
}


ScavTrap::ScavTrap(std::string name)
: ClapTrap(name) {

	std::cout << "[ScavTrap] string constructor called" << std::endl;
	this->set_hitPoints(100);
	this->set_energyPoints(50);
	this->set_attackDamage(20);
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
	this->set_name(rhs.get_name());
	this->set_hitPoints(rhs.get_hitPoints());
	this->set_energyPoints(rhs.get_energyPoints());
	this->set_attackDamage(rhs.get_attackDamage());
	return *this;
}


void ScavTrap::attack(const std::string& target) {

	if (this->get_hitPoints() == 0)
		print_noPoints("[CAN'T ATTACK] ", "hit points.");
	else if (this->get_energyPoints() == 0)
		print_noPoints("[CAN'T ATTACK] ", "energy points.");
	else {
		std::cout << CYAN << "ScavTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attackDamage() << " points of damage! " << RESET;
		this->set_energyPoints(this->get_energyPoints() - 1);
		std::cout << "[ep: " << this->get_energyPoints() << "]" << std::endl;
	}
	return;
}


void ScavTrap::guardGate(void) {

	std::cout << CYAN << "ScavTrap " << this->get_name() << " is now in Gate Keeper mode" << RESET << std::endl;
}
