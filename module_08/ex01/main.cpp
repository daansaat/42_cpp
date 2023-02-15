#include "Span.hpp"

int	main(void) {

std::cout << std::endl;
{
	Span sp = Span(3);
	sp.addNumber(60);
	sp.addNumber(66);
	sp.addNumber(160);
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
}
	std::cout << std::endl;
{
	Span sp = Span(1);
	sp.addNumber(60);
	try {
		sp.addNumber(47);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
	std::cout << std::endl;
{
	Span sp(10000);

	std::vector<int> vector;
	for (int i = 0; i <= 10000; i++) {
		vector.push_back(i);
	}

	try {
		sp.addRange(vector.begin(), vector.end());
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
}
	std::cout << std::endl;
	return 0;
}