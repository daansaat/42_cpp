#include "MutantStack.hpp"
#include <iostream>
#define GREY "\033[0;30m"
#define RESET "\033[0m"

int	main() {
std::cout << std::endl;
{
	std::cout << GREY << "[TEST] MutantStack<int> " << RESET << std::endl;
	MutantStack<int> mstack;
	mstack.push(5); std::cout << "push(5)" << std::endl;
	mstack.push(17); std::cout << "push(17)" << std::endl;
	std::cout << "top() = "<< mstack.top() << std::endl;
	mstack.pop(); std::cout << "pop()" << std::endl;
	std::cout << "size() = " <<  mstack.size() << std::endl;
	mstack.push(3); std::cout << "push(3)" << std::endl;
	mstack.push(5); std::cout << "push(5)" << std::endl;
	mstack.push(737); std::cout << "push(737)" << std::endl;
	//[...]
	mstack.push(0);
	MutantStack<int> s(mstack);
	MutantStack<int> p;
	p = s;
	MutantStack<int>::iterator it = p.begin();
	MutantStack<int>::iterator ite = p.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << " ";
	++it;
	}
	std::cout << std::endl;
}
std::cout << std::endl;
{
	std::cout << GREY << "[TEST] std::list<int> " << RESET << std::endl;
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
}
std::cout << std::endl;
{
	std::cout << GREY << "[TEST] MutantStack<std::string> " << RESET << std::endl;
	MutantStack<std::string> mstack;
	mstack.push("5");
	mstack.push("17");
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push("3");
	mstack.push("5");
	mstack.push("737");
	//[...]
	mstack.push("0");
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
}
std::cout << std::endl;
return 0;
}