#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{
	Weapon		_weapon;
	std::string	_name;
	public:
		HumanA(std::string name, Weapon weapon);
};

#endif