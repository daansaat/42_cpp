#include "easyfind.hpp"
#include <list>
#include <vector>
#include <array>

int main( void ) {
{
	std::cout << std::endl;
	std::cout << "............list iterator............" << std::endl;
	std::list<int> list;

	for (int i = 0; i <= 5; i++) {
		list.push_back(i);
	}

	std::list<int>::iterator it;
	std::cout << "List: {";
	for (it = list.begin(); it != list.end();)
		std::cout << " " << *it++;
	std::cout << " }" << std::endl;

    easyfind(list, 42);
    it = easyfind(list, 3);
	*it = 42;
	it = list.begin();

	std::cout << "List: {";
	for (it = list.begin(); it != list.end();)
		std::cout << " " << *it++;
	std::cout << " }" << std::endl;
}
{
	std::cout << std::endl;
	std::cout << "............vector iterator............" << std::endl;
	std::vector<int> vector;

	for (int i = 0; i <= 5; i++) {
		vector.push_back(i * i);
	}

	std::vector<int>::iterator it;
	std::cout << "Vector: {";
	for (it = vector.begin(); it != vector.end();)
		std::cout << " " << *it++;
	std::cout << " }" << std::endl;

	for (int i = 0; i <= 7; ++i) {
        it = easyfind(vector, i);
    }

	it--;
	*it = 100;

	std::cout << "Vector: {";
	for (it = vector.begin(); it != vector.end();)
		std::cout << " " << *it++;
	std::cout << " }" << std::endl;
    std::cout << std::endl;
}
}