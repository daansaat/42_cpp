#include "Base.hpp"
// #include <iostream>

int main ( void ) {
    Base *base = generate();
	Base &ref = *base;

    std::cout << "Base* ptr is pointing to ";
    identify(base);
    std::cout << "Base& ref is pointing to ";
    identify(ref);
    delete base;
}