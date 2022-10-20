#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define GREY "\033[0;30m"
# define RESET "\033[0m"

class	Intern {

public:

	Intern();
	Intern(const Intern& src);
	~Intern();

	Intern& operator=(Intern const & rhs);

	Form* makeForm(std::string name, std::string target);
};

#endif