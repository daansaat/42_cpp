#include "DiamondTrap.hpp"

int	main(void) {

	DiamondTrap DiamondTrap("Diamond");
	
	std::cout << std::endl;
	std::cout << DiamondTrap.get_name() << std::endl;
	std::cout << "HP:  " << DiamondTrap.get_hitPoints() << std::endl;
	std::cout << "EP:  " << DiamondTrap.get_energyPoints() << std::endl;
	std::cout << "ATK: " << DiamondTrap.get_attackDamage() << std::endl;
	std::cout << std::endl;
	DiamondTrap.attack("guy");
	DiamondTrap.takeDamage(50);
	DiamondTrap.beRepaired(10);
	DiamondTrap.guardGate();
	DiamondTrap.highFivesGuys();
	DiamondTrap.whoAmI();
	DiamondTrap.takeDamage(150);
	DiamondTrap.attack("guy");
	std::cout << std::endl;
	
	return 0;
}