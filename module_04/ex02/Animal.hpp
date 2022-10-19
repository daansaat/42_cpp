#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define CYAN "\033[0;36m"
# define RESET "\033[0m"

class	AAnimal {

public:

	AAnimal();
	AAnimal(const AAnimal& src);
	virtual ~AAnimal();
	
	AAnimal& operator=(const AAnimal& rhs);

	virtual void	makeSound() const = 0;
	std::string		getType() const;

protected:

	std::string type;
};


class	WrongAnimal {

public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& rhs);

	void		makeSound() const;
	std::string	getType() const;

protected:

	std::string type;
};

#endif