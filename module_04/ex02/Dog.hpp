#ifndef Dog_HPP
# define Dog_HPP
# include "Animal.hpp"

class	Dog : public AAnimal {

public:

	Dog();
	Dog(const Dog& src);
	~Dog();
	
	Dog& operator=(const Dog& rhs);

	void	makeSound() const;

private:

	Brain*	brain;
};

#endif