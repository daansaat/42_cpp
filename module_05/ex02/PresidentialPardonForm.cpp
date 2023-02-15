#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm(NULL, NULL, 25, 5) {

	std::cout << GREY << "[PPForm] Default constructor called." << RESET << std::endl;
	return;
}


PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", target, 25, 5) {

	std::cout << GREY << "[PPForm] String constructor called." << RESET << std::endl;
	return;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) {

	std::cout << GREY << "[PPForm] Copy constructor called." << RESET << std::endl;
	*this = src;
	return;
}



PresidentialPardonForm::~PresidentialPardonForm() {

	std::cout << GREY << "[PPForm] Destructor called." << RESET << std::endl;
	return;
}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {

	std::cout << GREY << "[PPForm] assignment operator called." << RESET << std::endl;
	this->setSigned(rhs.getSigned());
	return *this;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (!this->getSigned())
		throw(FormNotSigned());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException());

	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return;
}

