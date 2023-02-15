#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define CYAN "\033[0;36m"
# define RESET "\033[0m"

class ClapTrap {

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& rhs);

	void set_name(std::string name);
	void set_hitPoints(unsigned int value);
	void set_energyPoints(unsigned int value);
	void set_attackDamage(unsigned int value);

	std::string  get_name(void) const;
	unsigned int get_hitPoints(void) const;
	unsigned int get_energyPoints(void) const;
	unsigned int get_attackDamage(void) const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	void print_noPoints(std::string action, std::string points);

private:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

};

#endif