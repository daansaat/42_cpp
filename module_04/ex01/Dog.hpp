#ifndef Dog_HPP
# define Dog_HPP
# include "Animal.hpp"

class	Dog : public Animal {

public:

	Dog();
	Dog(const Dog& src);
	~Dog();
	
	Dog& operator=(const Dog& rhs);

	void	makeSound() const;
	void	setIdeas(size_t i, std::string str);
	void	getIdeas();

private:

	Brain*	brain;
};

#endif