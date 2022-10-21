#include "Converter.hpp"

Converter::Converter() {

	std::cout << GREY << "Default constructor called." << RESET << std::endl;
	return;
}


Converter::Converter(std::string input)
: _input(input) {

	std::cout << GREY << "String constructor called." << RESET << std::endl;
	return;
}


Converter::Converter(Converter const & src)
: _input(src._input) {

	std::cout << GREY << "Copy constructor called." << RESET << std::endl;
	return;
}


Converter::~Converter() {

	std::cout << GREY << "Destructor called." << RESET << std::endl;
	return;
}


Converter& Converter::operator=(Converter const & rhs) {

	std::cout << GREY << "Assignment operator called" << RESET << std::endl;
	this->_input = rhs._input;
	return *this;
}


Converter::operator char() const {

	char c;
	try {
		int i = std::stoi(_input);
		c = static_cast<char>(i);
	}
	catch(std::exception& e) {
		std:: string what = e.what();
		std::cout << "char: impossible: " << what.substr(6, std::string::npos) << std::endl;
		return 0; 
	}
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	return c;
}


Converter::operator int() const {

	int i;
	try {
		i = std::stoi(_input);
	}
	catch(std::exception& e) {
		std:: string what = e.what();
		std::cout << "int: impossible: " << what.substr(6, std::string::npos) << std::endl;
		return 0;
	}
	std::cout << "int: " << i << std::endl;
	return i;
}


Converter::operator float() const {

	float f;
	try {
		f = std::stof(_input);
	}
	catch(std::exception& e) {
		std:: string what = e.what();
		std::cout << "float: impossible: " << what.substr(6, std::string::npos) << std::endl;
		return 0;
	}
	float integral;
	if (std::modf(f, &integral) == 0)
		std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	return f;
}


Converter::operator double() const {

	double d;
	try {
		d = std::stod(_input);
	}
	catch(std::exception& e) {
		std:: string what = e.what();
		std::cout << "double: impossible: " << what.substr(6, std::string::npos) << std::endl;
		return 0;
	}
	std::cout << "double: " << d << std::endl;
	return d;
}
