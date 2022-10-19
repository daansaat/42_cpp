#include "Bureaucrat.hpp"
#define NEWLINE std::cout << std::endl;

int	main(void) {

	NEWLINE
	Bureaucrat Michel("Michel", 1);
	std::cout << Michel;
	Bureaucrat Claudia("Claudia", 150);
	std::cout << Claudia;
	NEWLINE
	try {
		std::cout << "Initializing bureaucrat with grade 0." << std::endl;
		Bureaucrat Chad("Chad", 0);
		std::cout << Chad;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	NEWLINE
	Bureaucrat Patricia("Patricia", 33);
	while (true) {
		
		try {
			std::cout << Patricia;
			std::cout << "incrementing grade" << std::endl;
			Patricia.incrementGrade();
		}
		catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
			break;
		}
	}
	NEWLINE
	try {
		std::cout << Claudia;
		std::cout << "decrementing grade" << std::endl;
		Claudia.decrementGrade();
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	NEWLINE
	std::cout << "Claudia = Patricia" << std::endl;
	Claudia = Patricia;
	std::cout << Claudia;
	NEWLINE
	std::cout << "Bureaucrat Copy(Patricia)" << std::endl;
	Bureaucrat Copy(Patricia);
	std::cout << Copy;
	NEWLINE
	return 0;
}