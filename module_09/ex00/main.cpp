#include "BitcoinExchange.hpp"

int main (int argc, char **argv) {

	try {
		if (argc != 2) {
			throw std::invalid_argument("Wrong number of arguments. Expected 1 argument.");
		}
		
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	
	return 0;
}