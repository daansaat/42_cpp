#include "Span.hpp"


//CANONICAL FORM//***********************************************************//


Span::Span() {

	// std::cout << "Default constructor called." << std::endl;
}


Span::Span(unsigned int N) : _size(N) {

	// std::cout << "Unsigned int constructor called." << std::endl;
	_ints.reserve(N);
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
	this->_size = rhs._size;
	this->_ints.assign(rhs._ints.begin(), rhs._ints.end());
	return *this;
}


//MEMBER FUNCTIONS//**********************************************************//


void Span::addNumber(int number) {

	if (_ints.size() == _size)
		throw NoSpaceException();
	_ints.push_back(number);
}


int Span::shortestSpan() {

	if (_ints.size() < 2)
		throw NoSpanException();
	Span temp(*this);
	std::sort(temp._ints.begin(), temp._ints.end());
	int	min_diff = INT_MAX;
	for (size_t i = 0; i < _size - 1; ++i) {
		if (temp._ints[i + 1] - temp._ints[i] < min_diff)
			min_diff = temp._ints[i + 1] - temp._ints[i];
	}
	return min_diff;
}


int Span::longestSpan() {

	if (_ints.size() < 2)
		throw NoSpanException();
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> result;
	result = minmax_element(_ints.begin(), _ints.end());
	return *result.second - *result.first;
}


static int RandomNumber () {return std::rand() % 1000;}

void Span::addManyNumbers() {

	std::srand(unsigned(std::time(nullptr)));
	// std::generate_n(_ints.begin(), _size, RandomNumber);
	for (size_t i = 0; i < _size; i++) {
		_ints.push_back(RandomNumber());
		// std::cout << i << ": " << _ints[i] << std::endl;
	}
	std::cout << "_size = " << _ints.size() << std::endl;
	// std::cout << *(_ints.begin() + 1) << std::endl;
	// std::cout << *_ints.end() << std::endl;
	// std::cout << _ints.size() << std::endl;
}


//EXCEPTIONS//***************************************************************//


const char* Span::NoSpaceException::what() const throw() {

	return "No more space!";
}


const char* Span::NoSpanException::what() const throw() {

	return "No span!";
}
