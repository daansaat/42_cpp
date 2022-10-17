#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal {

public:

	Animal();
	Animal(const Animal& src);
	virtual ~Animal();

	Animal& operator=(const Animal& rhs);

	virtual void	makeSound() const;
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