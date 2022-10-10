#include <iostream>
#include <iomanip>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << std::setw(40) << "memory address of the string: " << &str << std::endl;
	std::cout << std::setw(40) << "memory adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(40) << "memory adress held by stringREF: " << &stringREF << std::endl;
	std::cout << std::setw(40) << "value of the string: " << str << std::endl;
	std::cout << std::setw(40) << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << std::setw(40) << "value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}