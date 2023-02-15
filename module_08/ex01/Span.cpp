#include "Span.hpp"


//CANONICAL FORM//***********************************************************//


Span::Span() {

	// std::cout << "Default constructor called." << std::endl;
}


Span::Span(unsigned int N) : _N(N) {

	// std::cout << "Unsigned int constructor called." << std::endl;
}


Span::Span(const Span& src) {

	// std::cout << "Copy constructor called." << std::endl;
	*this = src;
}


Span::~Span() {

	// std::cout << "Destructor called." << std::endl;
}


Span& Span::operator=(const Span& rhs) {

	// std::cout << "Copy assignment operator called." << std::endl;
	this->_N = rhs._N;
	this->_nums.assign(rhs._nums.begin(), rhs._nums.end());
	return *this;
}


//MEMBER FUNCTIONS//**********************************************************//


void Span::addNumber(int number) {

	if (_nums.size() == _N)
		throw NoSpaceException();
	_nums.push_back(number);
}


int Span::shortestSpan() {

	if (_nums.size() < 2)
		throw NoSpanException();
	Span temp(*this);
	std::sort(temp._nums.begin(), temp._nums.end());
	int	shortest = temp._nums.back() - temp._nums.front();
	for (size_t i = 0; i < temp._nums.size() - 1; i++) {
		int span = temp._nums[i + 1] - temp._nums[i];
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}


int Span::longestSpan() {

	if (_nums.size() < 2)
		throw NoSpanException();
	return *std::max_element(_nums.begin(), _nums.end()) - *std::min_element(_nums.begin(), _nums.end());
}


void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	while (begin != end) {
		if (_nums.size() == _N)
			throw NoSpaceException();
		_nums.push_back(*begin);
		begin++;
	}
}


//EXCEPTIONS//***************************************************************//


const char* Span::NoSpaceException::what() const throw() {

	return "No more space!";
}


const char* Span::NoSpanException::what() const throw() {

	return "No span!";
}
