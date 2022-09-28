#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	std::string	_type;
	public:
		Weapon(std::string weapon);
		const std::string&	getType(void);
		void				setType(std::string weapon);
};

#endif