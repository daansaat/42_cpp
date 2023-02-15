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
	T& operator[](unsigned int i);

	int size(void) const;

	class OutOfBounds : public std::exception {
		public :
			virtual const char* what() const throw();
	};

private:

	T*				_array;
	unsigned int	_size;
};


template<typename T>
Array<T>::Array() : _array(nullptr), _size(0) {

	std::cout << GREY << "Default constructor called." << RESET << std::endl;
}


template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {

	// std::cout << GREY << "Unsigned int constructor called." << RESET << std::endl;
}


template<typename T>
Array<T>::Array(const Array& src) : _array(new T[src._size]), _size(0) {

	// std::cout << GREY << "Copy constructor called." << RESET << std::endl;
	*this = src;
}


template<typename T>
Array<T>::~Array() {

	// std::cout << GREY << "Destructor called." << RESET << std::endl;
	delete[] _array;
}


template<typename T>
Array<T>& Array<T>::operator=(const Array& rhs) {

	// std::cout << GREY << "Assignment operator called." << RESET << std::endl;
	delete[] _array;
	_size = rhs._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		_array[i] = rhs._array[i];
	}
	return *this;
}


template<typename T>
T& Array<T>::operator[](unsigned int i) {

	// std::cout << GREY << "Subscripting operator called." << RESET << std::endl;
	if (i >= _size)
		throw(OutOfBounds());
	return _array[i];
}


template<typename T>
const char* Array<T>::OutOfBounds::what() const throw() {

	return RED"Index out of bounds"RESET;
}


template<typename T>
int Array<T>::size(void) const {

	return _size;
}

#endif