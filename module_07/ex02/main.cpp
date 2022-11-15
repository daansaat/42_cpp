#include "Array.hpp"
#include <iostream>

int	main(void) {

	std::cout << std::endl;
	Array<int>	a;
	std::cout << GREY << "Array<int> a;" << RESET << std::endl;
	std::cout << "size of a = " << a.size() << std::endl;
	try {
		std::cout << "a[0] = " << a[0] << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	Array<int>	b(3);
	std::cout << GREY << "Array<int> b(3);" << RESET << std::endl;
	std::cout << "size of b = " << b.size() << std::endl;
	std::cout << "b[0] = " << b[0] << std::endl;
	std::cout << std::endl;

	b[2] = 42;
	Array<int> 	b_copy(b);
	std::cout << GREY << "b[2] = 42;" << std::endl;
	std::cout << "b_copy(b);" << RESET << std::endl;
	std::cout << "b_copy[2] = " << b_copy[2] << std::endl;
	try {
		std::cout << "b_copy[-3] = " << b_copy[-3] << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	Array<std::string>	c(2);
	Array<std::string>	d(2);
	c[0] = "hello";
	d = c;
	std::cout << GREY << "Array<std::string> c(2);" << std::endl;
	std::cout << "Array<std::string> d(2);" << std::endl;
	std::cout << "c[0] = \"hello\";" << std::endl;
	std::cout << "d = c;" << RESET << std::endl;
	std::cout << "d[0] = " << d[0] << std::endl;
	std::cout << std::endl;

	Array<float>	e(1);
	e[0] = 0.34;
	Array<float>	f(e);
	std::cout << GREY << "Array<float> e(1);" << std::endl;
	std::cout << "e[0] = 0.34;" << std::endl;
	std::cout << "Array<float> f(e);" << RESET << std::endl;
	std::cout << "f[0] = " << f[0] << std::endl;
	e[0] = 7.99;
	std::cout << GREY << "e[0] = 7.99;" << RESET << std::endl;
	std::cout << "e[0] = " << e[0] << std::endl;
	std::cout << "f[0] = " << f[0] << std::endl;
	std::cout << std::endl;
	
	return 0;
}