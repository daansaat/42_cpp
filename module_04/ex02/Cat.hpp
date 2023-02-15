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
	void	setIdeas(size_t i, std::string str);
	void	getIdeas();

private:

	Brain*	brain;
};

#endif