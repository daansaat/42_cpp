#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	clap("clap");
	ClapTrap	trap("trap");
	ClapTrap	claptrap(trap);

	claptrap = clap;

	for (int i = 0; i < 11; i++) {
		claptrap.attack("trap");
		trap.takeDamage(3);
		trap.beRepaired(1);
	}
}