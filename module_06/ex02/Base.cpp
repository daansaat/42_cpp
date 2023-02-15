#include "Base.hpp"
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base() {
	
	std::cout << "Destructor called." << std::endl;
	return;
}


Base* generate(void) {

	std::srand(time(NULL));
	int random = rand() % 3;
	switch(random) {
		case 0 : std::cout << "Generated A class" << std::endl;
			return (new A);
		case 1 : std::cout << "Generated B class" << std::endl;
			return (new B);
		case 2 : std::cout << "Generated C class" << std::endl;
			return (new C);
		default : return NULL;
	}
}


void identify(Base* p) {

	if (dynamic_cast<A *>(p)) {
		std::cout << "A" << std::endl;
		return;
	}
	if (dynamic_cast<B *>(p)) {
		std::cout << "B" << std::endl;
		return;
	}
	if (dynamic_cast<C *>(p)) {
		std::cout << "C" << std::endl;
		return;
	}
}


void identify(Base& p) {

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (std::bad_cast) {
	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (std::bad_cast) {
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch (std::bad_cast) {
	}
}