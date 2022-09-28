#include "Zombie.hpp"

Zombie::Zombie() {
	
}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << name << ": destroyed" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::giveName(std::string name) {
	this->name = name;
}