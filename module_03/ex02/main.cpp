#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {

	ScavTrap	bot1("bot1");
	ClapTrap	bot2("bot2");
	ScavTrap	bot3;
	FragTrap	bot4("bot4");
	FragTrap	bot5(bot4);

	bot3 = bot1;

	bot1.beRepaired(5);
	for (int x = 11; x > 0; x--)
		bot2.attack("bot1");
	bot1.takeDamage(0);
	bot1.attack("bot2");
	bot2.takeDamage(20);
	bot2.beRepaired(5);
	bot3.guardGate();
	bot4.attack("bot1");
	bot1.takeDamage(30);
	bot5.attack("bot1");
	bot1.takeDamage(30);
	bot1.beRepaired(5);
	bot4.attack("bot1");
	bot5.attack("bot1");
	bot1.takeDamage(60);
	bot4.attack("bot1");
	bot1.takeDamage(30);
	bot4.highFivesGuys();
	
	return 0;
}