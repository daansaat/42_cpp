#include "Converter.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cerr << "Invalid argument count" << std::endl;
		return 0;
	}
	
	Converter x(argv[1]);

	// char 	c;
	// int		i;
	// float	f;
	// double	d;

	// c = static_cast<char>(x);
	// i = static_cast<int>(x);
	// f = static_cast<float>(x);
	// d = static_cast<double>(x);

	return 0;
}