#include "Data.hpp"

int	main(void) {

	Data			*ptr_1 = new Data;
	Data			*ptr_2;
	uintptr_t		raw;

	ptr_1->n = 42;
	raw = serialize(ptr_1);
	std::cout << "The value of raw: " << raw << std::endl;
	std::cout << "The value of ptr_1: " << ptr_1 << std::endl;
	std::cout << "The value of ptr_1->n: " << ptr_1->n << std::endl;
	ptr_2 = deserialize(raw);
	std::cout << "The value of ptr_2: " << ptr_2 << std::endl;
	std::cout << "The value of ptr_2->n: " << ptr_2->n << std::endl;

	delete ptr_1;

	// int		*ptr = new int (65);
	// char	*ch = reinterpret_cast<char *>(ptr);

	// std::cout << "Value of *ptr = " << *ptr << std::endl;
	// std::cout << "Value of *ch = " << *ch << std::endl;

	// delete ptr;
}