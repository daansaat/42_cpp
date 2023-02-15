#include "Converter.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cerr << "Invalid argument count" << std::endl;
		return 0;
	}
	
	Converter Converter;

	Converter.convert(argv[1]);
	return 0;
}