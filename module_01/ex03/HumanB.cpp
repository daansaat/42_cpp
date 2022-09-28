#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _weapon(NULL), _name(name) {
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void	HumanB::attack() {
	std::cout << _name << " attacks with their weapon ";
	std::cout << _weapon->getType() << std::endl;
}