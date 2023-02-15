#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>

template<typename T>
typename T::iterator easyfind(T& container, int n) {

	typename T::iterator it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		std::cerr << n << " Not found" << std::endl;
	return it;
}

#endif