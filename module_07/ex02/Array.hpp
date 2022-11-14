#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# define GREY "\033[0;30m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

template<typename T>
class	Array {

public:

	Array();
	Array(unsigned int n);
	Array(const Array& src);
	~Array();

	Array& operator=(const Array& rhs);
	T& operator[](int i);

	int size(void) const;

	class OutOfBounds : public std::exception {
		public :
			virtual const char* what() const throw();
	};

private:

	T*	_array;
	int	_size;
};


template<typename T>
Array<T>::Array() : _array(NULL), _size(0) {

	std::cout << GREY << "Default constructor called." << RESET << std::endl;
}


template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {

	std::cout << GREY << "Unsigned int constructor called." << RESET << std::endl;
	_array = new T[n];
	for (unsigned int i = 0; i < n; i++) {
		_array[i] = 0;
	}
}


template<typename T>
Array<T>::Array(const Array& src) {

	std::cout << GREY << "Copy constructor called." << RESET << std::endl;
	*this = src;
}


template<typename T>
Array<T>::~Array() {

	std::cout << GREY << "Destructor called." << RESET << std::endl;
	if (_array)
		delete[] _array;
}


template<typename T>
Array<T>& Array<T>::operator=(const Array& rhs) {

	std::cout << GREY << "Assignment operator called." << RESET << std::endl;
	_size = rhs._size;
	if (*_array)
		delete[] _array;
	_array = new T[_size];
	for (int i = 0; i < _size; i++) {
		_array[i] = rhs._array[i];
	}
	return *this;
}


template<typename T>
T& Array<T>::operator[](int i) {

	std::cout << GREY << "Subscripting operator called." << RESET << std::endl;
	if (i < 0 || i >= _size)
		throw(OutOfBounds());
	return _array[i];
}


template<typename T>
const char* Array<T>::OutOfBounds::what() const throw() {

	return RED"Out of bounds"RESET;
}


template<typename T>
int Array<T>::size(void) const {

	return _size;
}

#endif