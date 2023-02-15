#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
: AForm(NULL, NULL, 72, 45) {

	std::cout << GREY << "[RQForm] Default constructor called." << RESET << std::endl;
	return;
}


RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", target, 72, 45) {

	std::cout << GREY << "[RQForm] String constructor called." << RESET << std::endl;
	return;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) {

	std::cout << GREY << "[RQForm] Copy constructor called." << RESET << std::endl;
	*this = src;
	return;
}



RobotomyRequestForm::~RobotomyRequestForm() {

	std::cout << GREY << "[RQForm] Destructor called." << RESET << std::endl;
	return;
}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {

	std::cout << GREY << "[RQForm] assignment operator called." << RESET << std::endl;
	this->setSigned(rhs.getSigned());
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (this->getSigned() == false)
		throw(FormNotSigned());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException());

	std::cout << "drdrdrdrdrdrrrdrdrdrdr" << std::endl;
	std::srand(time(NULL));
	int random = rand() % 2;
	if (random == 0) {
		std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
	}
	else
		std::cout << "Robotomy failed..." << std::endl;
}

