#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define NEWLINE std::cout << std::endl;

int	main(void) {

	NEWLINE
	Bureaucrat Boss("Boss", 1);
	std::cout << Boss << std::endl;
	Bureaucrat Intern("Intern", 137);
	std::cout << Intern << std::endl;
	NEWLINE
	{
		ShrubberyCreationForm form("shrub");
		ShrubberyCreationForm form2("shrub2");
		std::cout << form << std::endl;
		try {
			Boss.signForm(form);
			form2 = form;
			Boss.executeForm(form);
			Boss.executeForm(form2);
			Intern.executeForm(form);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	NEWLINE
	{
		RobotomyRequestForm form("Patricia");
		std::cout << form << std::endl;
		try {
			Boss.signForm(form);
			Boss.executeForm(form);
			Intern.executeForm(form);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	NEWLINE
	{
		PresidentialPardonForm form("Mickey");
		std::cout << form << std::endl;
		try {
			Boss.signForm(form);
			Boss.executeForm(form);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	return 0;
}