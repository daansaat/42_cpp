#include "Zombie.hpp"

int	main(void) {
	int	N = 5;
	std::string	name = "michel";
	Zombie	*zombie;
	zombie = zombieHorde(N, name);
	for (int i = 0; i < N; i++) {
		std::cout << "[" << i + 1 << "] ";
		zombie[i].announce();
	}
	delete[] zombie;
	system("leaks zombie");
	return (0);
}