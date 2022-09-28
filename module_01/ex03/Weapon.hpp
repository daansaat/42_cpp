#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	std::string	type;
	public:
		Weapon(std::string weapon);
		std::string const&	getType(void);
		void				setType(std::string weapon);
};

#endif