#include "Converter.hpp"

Converter::Converter() {

	std::cout << GREY << "Default constructor called." << RESET << std::endl;
	return;
}


Converter::Converter(std::string input)
: exception_c(false)
, exception_i(false)
, exception_f(false)
, exception_d(false) {

	std::cout << GREY << "String constructor called." << RESET << std::endl;
	if (detectInt(input))
		convertFromInt();
	else if (detectFloat(input))
		convertFromFloat();
	else if (detectDouble(input))
		convertFromDouble();
	else {
		if (!exception_c)
			std::cout << "char: impossible: no conversion" << std::endl;
		if (!exception_i)
			std::cout << "int: impossible: no conversion" << std::endl;
		if (!exception_f)
			std::cout << "float: impossible: no conversion" << std::endl;
		if (!exception_d)
			std::cout << "double: impossible: no conversion" << std::endl;
	}
	return;
}


Converter::Converter(Converter const & src) {

	std::cout << GREY << "Copy constructor called." << RESET << std::endl;
	*this = src;
	return;
}


Converter::~Converter() {

	std::cout << GREY << "Destructor called." << RESET << std::endl;
	return;
}


Converter& Converter::operator=(Converter const & rhs) {

	std::cout << GREY << "Assignment operator called" << RESET << std::endl;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_d = rhs._d;
	this->exception_c = rhs.exception_c;
	this->exception_i = rhs.exception_i;
	this->exception_f = rhs.exception_f;
	this->exception_d = rhs.exception_d;
	return *this;
}


bool Converter::detectInt(std::string input) {

	std::size_t pos;
	try {
		_i = stoi(input, &pos);
		if (pos != input.length()) {
			return false;
		}
	}
	catch(std::exception& e) {
		std::string what = e.what();
		std::cout << "char: impossible: " << what.substr(6, std::string::npos) << std::endl;
		std::cout << "int: impossible: " << what.substr(6, std::string::npos) << std::endl;
		exception_c = true;
		exception_i = true;
		return false;
	}
	if (!std::isprint(_i)) {
		std::cout << "char: Non displayable" << std::endl;
		exception_c = true;
	}
	std::cout << std::fixed << std::setprecision(1);
	return true;
}


bool Converter::detectFloat(std::string input) {

	std::size_t pos;
	try {
		_f = stof(input, &pos);
		if (pos + 1 != input.length() || input[pos] != 'f')
			return false;
	}
	catch(std::exception& e) {
		std::string what = e.what();
		std::cout << "float: impossible: " << what.substr(6, std::string::npos) << std::endl;
		exception_f = true;
		return false;
	}
	if (!exception_c && !std::isprint(_f)) {
		std::cout << "char: Non displayable" << std::endl;
		exception_c = true;
	}
	float integral = _f;
	if (std::modf(integral, &integral) == 0)
			std::cout << std::fixed << std::setprecision(1);
	return true;
}


bool Converter::detectDouble(std::string input) {

	std::size_t pos;
	try {
		_d = stod(input, &pos);
		if (pos != input.length())
			return false;
	}
	catch(std::exception& e) {
		std::string what = e.what();
		std::cout << "double: impossible: " << what.substr(6, std::string::npos) << std::endl;
		exception_d = true;
		return false;
	}
	if (!exception_c && !std::isprint(_d)) {
		std::cout << "char: Non displayable" << std::endl;
		exception_c = true;
	}
	float integral = static_cast<float>(_d);
	if (std::modf(integral, &integral) == 0)
			std::cout << std::fixed << std::setprecision(1);
	return true;
}


void Converter::convertFromInt() {

	// std::cout << GREY << "converting from int" << RESET << std::endl;

	if (!exception_c)
		std::cout << "char: '" << static_cast<char>(_i) << "'" << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << static_cast<float>(_i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_i) << std::endl;
	return;
}


void Converter::convertFromFloat() {

	// std::cout << GREY << "converting from float" << RESET << std::endl;

	if (!exception_c)
		std::cout << "char: '" << static_cast<char>(_f) << "'" << std::endl;
	if (!exception_i)
		std::cout << "int: " << static_cast<int>(_f) << std::endl;
	std::cout << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_f) << std::endl;
	return;
}


void Converter::convertFromDouble() {

	// std::cout << GREY << "converting from double" << RESET << std::endl;
	
	if (!exception_c)
		std::cout << "char: '" << static_cast<char>(_d) << "'" << std::endl;
	if (!exception_i)
		std::cout << "int: " << static_cast<int>(_d) << std::endl;
	if (!exception_f)
		std::cout << "float: " << static_cast<float>(_d) << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
	
	return;
}
