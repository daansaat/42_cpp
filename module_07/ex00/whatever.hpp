#ifndef WHATEVER_HPP
# define WHATEVER_HPP


template<typename T>
void swap(T& value1, T& value2) {

	T temp = value1;
	value1 = value2;
	value2 = temp;
}


template<typename T>
T const& min(T const& value1, T const& value2) {

	return (value1 < value2 ? value1 : value2);
}


template<typename T>
T const& max(T const& value1, T const& value2) {

	return (value1 > value2 ? value1 : value2);
}

#endif