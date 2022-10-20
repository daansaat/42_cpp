#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

	std::cout << GREY << "Default constructor called." << RESET << std::endl;
	return;
}


Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name) {

	std::cout << GREY << "String, int constructor called." << RESET << std::endl;
	if (grade < 1)
		throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());
	_grade = grade; 
	return;
}


Bureaucrat::Bureaucrat(const Bureaucrat& src)
: _name(src._name) {

	std::cout << GREY << "Copy constructor called." << RESET << std::endl;
	*this = src;
	return;
}


Bureaucrat::~Bureaucrat() {

	std::cout << GREY << "Destructor called." << RESET << std::endl;
	return;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {

	std::cout << GREY << "Assignment operator called." << RESET << std::endl;
	this->_grade = rhs._grade;
	return *this;
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs) {

	std::cout << "[BUREAUCRAT] " << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}


const std::string	Bureaucrat::getName() const {

	return this->_name;
}


int	Bureaucrat::getGrade() const {

	return this->_grade;
}


void	Bureaucrat::incrementGrade() {

	if (this->_grade == 1)
		throw(GradeTooHighException());
	_grade -= 1;
	return;
}


void	Bureaucrat::decrementGrade() {

	if (this->_grade == 150)
		throw(GradeTooLowException());
	_grade += 1;
	return;
}


const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return "Grade too high";
}


const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return "Grade too low";
}


void Bureaucrat::signForm(Form& form) {

	try {

		form.beSigned(*this);
	}
	catch (std::exception& e) {
		std::cout << this->_name << " couldn't sign " << form.getName();
		std::cout << " because " << e.what() << std::endl;
		return;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
	return;
}


void Bureaucrat::executeForm(Form const & form) {

	try {
		form.execute(*this);
	}
	catch (std::exception& e) {
		std::cout << this->_name << " couldn't execute " << form.getName() << " form because, " << e.what() << std::endl;
		return;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
	return;
}
