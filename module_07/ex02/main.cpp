#include "Array.hpp"
#include <iostream>

int	main(void) {

	std::cout << std::endl;
	std::cout << std::endl;

	Array<int>	array0;
	
	try {
		std::cout << "array0[0] = " << array0[0] << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	Array<int>	array1(3);
	Array<int>	array2(1);
	Array<int> 	array1_copy(array1);

	std::cout << "array1[0] = " << array1[0] << std::endl;
	array1[2] = 42;
	array2 = array1;
	std::cout << "array2[2] = " << array2[2] << std::endl;
	std::cout << "array1_copy[2] = " << array1_copy[0] << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	
	system("leaks array");
	return 0;
}