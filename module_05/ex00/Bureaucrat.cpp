#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

	std::cout << "Default constructor called." << std::endl;
	return;
}


Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name) {

	if (grade < 1)
		throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());
	_grade = grade; 
	std::cout << "String, int constructor called." << std::endl;
	return;
}


Bureaucrat::Bureaucrat(const Bureaucrat& src)
: _name(src._name) {

	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}


Bureaucrat::~Bureaucrat() {

	std::cout << "Destructor called." << std::endl;
	return;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {

	std::cout << "Assignment operator called." << std::endl;
	this->_grade = rhs._grade;
	return *this;
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs) {

	std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return os;
}


const std::string	Bureaucrat::getName() const {

	return this->_name;
}


int	Bureaucrat::getGrade() const {

	return this->_grade;
}


void	Bureaucrat::incrementGrade() {

	if (this->_grade - 1 < 1)
		throw(GradeTooHighException());
	_grade -= 1;
	return;
}


void	Bureaucrat::decrementGrade() {

	if (this->_grade + 1 > 150)
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
