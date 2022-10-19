#include "Bureaucrat.hpp"
#define NEWLINE std::cout << std::endl;

int	main(void) {

	NEWLINE
	Bureaucrat Boss("Boss", 1);
	std::cout << Boss;
	NEWLINE
	Bureaucrat Intern("Intern", 150);
	std::cout << Intern;
	NEWLINE
	Form Form1("Important", 1, 1);
	std::cout << Form1;
	NEWLINE
	Intern.signForm(Form1);
	NEWLINE
	Boss.signForm(Form1);
	std::cout << Form1;
	NEWLINE
	Form Form2("notImportant", 150, 150);
	std::cout << Form2;
	NEWLINE
	Intern.signForm(Form2);
	std::cout << Form2;
	NEWLINE
	return 0;
}