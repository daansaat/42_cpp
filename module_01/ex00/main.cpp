#include "Zombie.hpp"

void	testChump() {
	std::string	name = "eric";
	randomChump(name);
}

Zombie	*testZombie() {
	Zombie	*zombie;
	std::string	name = "mary";
	zombie = newZombie(name);
	return (zombie);
}

int	main(void) {
	Zombie	*zombie;
	zombie = testZombie();
	zombie->announce();
	testChump();
	delete zombie;
	system("leaks zombie");
	return (0);
}