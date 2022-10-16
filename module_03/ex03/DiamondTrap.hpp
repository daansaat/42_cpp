#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap& src);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& rhs);

	void attack(const std::string& target);
	void whoAmI();

private:

	std::string _name;
};

#endif