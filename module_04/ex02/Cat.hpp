#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class	Cat : public AAnimal {

public:

	Cat();
	Cat(const Cat& src);
	~Cat();
	
	Cat& operator=(const Cat& rhs);

	void	makeSound() const;
	void	setIdeas(std::string str);
	void	getIdeas();

private:

	Brain*	brain;
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