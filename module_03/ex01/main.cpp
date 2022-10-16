#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap	bot1("bot1");
	ClapTrap	bot2("bot2");
	ScavTrap	bot3;

	bot3 = bot1;

	bot1.beRepaired(5);
	bot2.attack("bot1");
	bot1.takeDamage(0);
	bot1.attack("bot2");
	bot2.takeDamage(20);
	bot2.beRepaired(5);
	bot3.guardGate();

	return 0;
}