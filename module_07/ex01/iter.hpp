#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>


template<typename T>
void ft_print(T const& element) {

	std::cout << element << " ";
}


template<typename T>
void iter(T const* array, int length, void(*func)(T const&)) {

	for (int i = 0; i < length; i++) {

		func(array[i]);
	}
}

#endif