#include "PmergeMe.hpp"

static void displaySequence(std::string str, std::vector<int>& vec) {

	std::cout << str;
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

static void displayTime(std::clock_t startTime, std::clock_t endTime, int size) {

	double totalTime_usec = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC * 1e6;
	std::cout << "Time to process a range of " 
			<< size
			<< " elements with std::vector<int> : " 
			<< totalTime_usec << " us" 
			<< std::endl;
}

int main(int argc, char **argv) {

	try {
		if (argc < 2)
			throw std::invalid_argument("Wrong number of arguments. Expected atleast 2 arguments.");
		std::vector<int> vec;
		std::list<int> lst;
		for (int i = 1; i < argc; i++) {
			std::size_t pos = 0;
			std::string arg = argv[i];
			int number = std::stoi(arg, &pos);
			if (number < 0 || pos != arg.length())
				throw std::runtime_error("Invalid input: " + arg);
			vec.push_back(number);
			lst.push_back(number);
		}
		displaySequence("Before: ", vec);
		std::clock_t startTime = std::clock();
		sort(vec, 0, vec.size() - 1);
		std::clock_t endTime = std::clock();
		displaySequence("After: ", vec);
		displayTime(startTime, endTime, vec.size());
		startTime = std::clock();
		sort(lst, 0, lst.size() - 1);
		endTime = std::clock();
		displayTime(startTime, endTime, vec.size());
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}
