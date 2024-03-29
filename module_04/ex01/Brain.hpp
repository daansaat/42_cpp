#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define CYAN "\033[0;36m"
# define RESET "\033[0m"

class	Brain {

public:

	Brain();
	Brain(const Brain& src);
	~Brain();

	Brain& operator=(const Brain& rhs);

	void				setIdea(size_t i, std::string idea);
	const std::string	getIdea(size_t i) const;

private:

	std::string ideas[100];
};

#endif