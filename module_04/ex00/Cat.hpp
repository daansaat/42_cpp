#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class	Cat : public Animal {

public:

	Cat();
	Cat(const Cat& src);
	~Cat();

	Cat& operator=(const Cat& rhs);

	void	makeSound() const;
};


class	WrongCat : public WrongAnimal {

public:

	WrongCat();
	WrongCat(const WrongCat& src);
	~WrongCat();

	WrongCat& operator=(const WrongCat& rhs);

	void	makeSound() const;
};

#endif