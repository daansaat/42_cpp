#include "RPN.hpp"

int main(int argc, char **argv) {

	try {
		if (argc != 2) {
			throw std::invalid_argument("Wrong number of arguments. Expected 1 argument.");
		}
		int answer = evaluateRPN(argv[1]);
		std::cout << answer << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}