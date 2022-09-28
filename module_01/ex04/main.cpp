#include "strReplace.hpp"
#include <iostream>
#include <fstream>

int	main(int argc, char **argv) {
	std::fstream	file (argv[1]);
	std::string		fileStr;
	std::string		s1 (argv[2]);
	std::string		s2 (argv[3]);

	(void)argc;
	if (file.is_open()) {
		while (file.good()) { //or while (file)
			
			std::cout << fileStr;
		}
	}
	return (0);
}