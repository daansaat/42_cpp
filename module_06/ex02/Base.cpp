#include "Base.hpp"
#include <iostream>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base() {
	
	std::cout << "Destructor called." << std::endl;
	return;
}


Base * generate(void) {

	std::srand(time(NULL));
	int random = rand() % 3;
	switch(random) {

		case 0 : return (new A);
		case 1 : return (new B);
		case 2 : return (new C);
		default : return NULL;
	}
}


void identify(Base* p) {

	A *ap = dynamic_cast<A *>(p);
	if (ap)
		std::cout << "A" << std::endl;
	B *bp = dynamic_cast<B *>(p);
	if (bp)
		std::cout << "B" << std::endl;
	C *cp = dynamic_cast<C *>(p);
	if (cp)
		std::cout << "C" << std::endl;
}


void identify(Base& p) {

	try {
		A &a = dynamic_cast<A &>(p);
		static_cast<void>(a);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast) {
	}
	try {
		B &b = dynamic_cast<B &>(p);
		static_cast<void>(b);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast) {
	}
	try {
		C &c = dynamic_cast<C &>(p);
		static_cast<void>(c);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast) {
	}
}