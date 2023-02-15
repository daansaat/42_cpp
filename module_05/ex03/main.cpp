#include "Bureaucrat.hpp"
#include "Intern.hpp"

#define NEWLINE std::cout << std::endl;

int	main(void) {

	NEWLINE
	Intern	intern;
	AForm*	scf;
	AForm*	rrf;
	AForm*	ppf;
	AForm*	err;
	NEWLINE
	scf = intern.makeForm("shrubbery creation", "shrub");
	std::cout << *scf << std::endl;
	rrf = intern.makeForm("robotomy request", "you");
	std::cout << *rrf << std::endl;
	ppf = intern.makeForm("presidential pardon", "you");
	std::cout << *ppf << std::endl;
	err = intern.makeForm("doesn't exist", "bad");
	NEWLINE
	Bureaucrat Boss("Boss", 1);
	NEWLINE
	Boss.signForm(*rrf);
	Boss.executeForm(*rrf);
	NEWLINE
	delete scf;
	delete rrf;
	delete ppf;
	return 0;
}