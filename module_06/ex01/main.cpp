#include "Data.hpp"

int	main(void) {

	Data			*ptr1 = new Data;
	Data			*ptr2;
	uintptr_t		raw;

	ptr1->n = 42;
	raw = serialize(ptr1);
	std::cout << "The value of raw: " << raw << std::endl;
	std::cout << "The value of ptr1: " << ptr1 << std::endl;
	std::cout << "The value of ptr1->n: " << ptr1->n << std::endl;
	ptr2 = deserialize(raw);
	std::cout << "The value of ptr2: " << ptr2 << std::endl;
	std::cout << "The value of ptr2->n: " << ptr2->n << std::endl;

	delete ptr1;
}