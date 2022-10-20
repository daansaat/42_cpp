#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
: Form("", 72, 45) {

	std::cout << GREY << "[RRForm] Default constructor called." << RESET << std::endl;
	return;
}


RobotomyRequestForm::RobotomyRequestForm(std::string name)
: Form(name, 72, 45) {

	std::cout << GREY << "[RRForm] String constructor called." << RESET << std::endl;
	return;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) {

	std::cout << GREY << "[RRForm] Copy constructor called." << RESET << std::endl;
	*this = src;
	return;
}



RobotomyRequestForm::~RobotomyRequestForm() {

	std::cout << GREY << "[RRForm] Destructor called." << RESET << std::endl;
	return;
}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {

	std::cout << GREY << "[RRForm] assignment operator called." << RESET << std::endl;
	this->setSigned(rhs.getSigned());
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (!this->getSigned())
		throw(FormNotSigned());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException());

	std::cout << "drdrdrdrdrdrrrdrdrdrdr" << std::endl;
	std::srand(time(NULL));
	int random = rand() % 2;
	if (random == 0) {
		std::cout << this->getName() << " has been robotomized successfully!" << std::endl;
		return;
	}
	std::cout << "Robotomy failed..." << std::endl;
	return;
}

