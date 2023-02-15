#include "AForm.hpp"

AForm::AForm() 
: _signed(false)
, _gradeToSign(0)
, _gradeToExecute(0) {

	std::cout << GREY << "[Form] Default constructor called." << RESET << std::endl;
	return;
}


AForm::AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute)
: _name(name)
, _target(target)
, _signed(false)
, _gradeToSign(gradeToSign)
, _gradeToExecute(gradeToExecute) {

	std::cout << GREY << "[Form] String, string, int, int constructor called." << RESET << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw(GradeTooHighException());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw(GradeTooLowException());
	return;
}


AForm::AForm(const AForm& src)
: _name(src._name)
, _target(src._target)
, _signed(src._signed)
, _gradeToSign(src._gradeToSign)
, _gradeToExecute(src._gradeToExecute) {

	std::cout << GREY << "[Form] Copy constructor called." << RESET << std::endl;
	return;
}


AForm::~AForm() {

	std::cout << GREY << "[Form] Destructor called." << RESET << std::endl;
	return;
}


AForm& AForm::operator=(const AForm& rhs) {

	std::cout << GREY << "[Form] Assignment operator called." << RESET << std::endl;
	if (this != &rhs) {
		this->_signed = rhs._signed;
	}
	return *this;
}


std::ostream& operator<<(std::ostream& os, const AForm& rhs) {

	std::cout << "[FORM] ";
	std::cout << rhs.getName();
	std::cout << " | signed: " << rhs.getSigned();
	std::cout << " | grade to sign: " << rhs.getGradeToSign();
	std::cout << " | grade to execute: " << rhs.getGradeToExecute();
	return os;
}


std::string	AForm::getName() const {

	return this->_name;
}


std::string	AForm::getTarget() const {

	return this->_target;
}


bool AForm::getSigned() const {

	return this->_signed;
}


int	AForm::getGradeToSign() const {

	return this->_gradeToSign;
}


int	AForm::getGradeToExecute() const {

	return this->_gradeToExecute;
}


void AForm::setSigned(const bool value) {

	this->_signed = value;
}



const char* AForm::GradeTooHighException::what() const throw() {

	return "Grade too high";
}


const char* AForm::GradeTooLowException::what() const throw() {

	return "Grade too low";
}


const char* AForm::FormNotSigned::what() const throw() {

	return "Form not signed";
}


void AForm::beSigned(const Bureaucrat& signer) {

	if (signer.getGrade() > this->_gradeToSign) {
		throw(GradeTooLowException());
	}
	this->_signed = true;
}
