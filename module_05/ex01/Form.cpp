#include "Form.hpp"

Form::Form() 
: _signed(false)
, _gradeToSign(0)
, _gradeToExecute(0) {

	std::cout << "[Form] Default constructor called." << std::endl;
	return;
}


Form::Form(std::string name, int gradeToSign, int gradeToExecute)
: _name(name)
, _signed(false)
, _gradeToSign(gradeToSign)
, _gradeToExecute(gradeToExecute) {

	std::cout << "[Form] String, int, int constructor called." << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw(GradeTooHighException());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw(GradeTooLowException());
	return;
}


Form::Form(const Form& src)
: _name(src._name)
, _signed(src._signed)
, _gradeToSign(src._gradeToSign)
, _gradeToExecute(src._gradeToExecute) {

	std::cout << "[Form] Copy constructor called." << std::endl;
	return;
}


Form::~Form() {

	std::cout << "[Form] Destructor called." << std::endl;
	return;
}


Form& Form::operator=(const Form& rhs) {

	std::cout << "[Form] Assignment operator called." << std::endl;
	this->_signed = rhs._signed;
	return *this;
}


std::ostream& operator<<(std::ostream& os, const Form& rhs) {

	std::cout << rhs.getName();
	std::cout << " | signed: " << rhs.getSigned();
	std::cout << " | grade to sign: " << rhs.getGradeToSign();
	std::cout << " | grade to execute: " << rhs.getGradeToExecute();
	std::cout << std::endl;
	
	return os;
}


std::string	Form::getName() const {

	return this->_name;
}


bool Form::getSigned() const {

	return this->_signed;
}


int	Form::getGradeToSign() const {

	return this->_gradeToSign;
}


int	Form::getGradeToExecute() const {

	return this->_gradeToExecute;
}


const char* Form::GradeTooHighException::what() const throw() {

	return "Grade too high";
}


const char* Form::GradeTooLowException::what() const throw() {

	return "Grade too low";
}


void Form::beSigned(const Bureaucrat& bureaucrat) {

	if (bureaucrat.getGrade() > this->_gradeToSign) {
		throw(GradeTooLowException());
	}
	this->_signed = true;
}
