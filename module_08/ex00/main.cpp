#include "easyfind.hpp"
#include <vector>
#include <array>

int	main(void) {

{
	std::vector<int> ints;

	ints.push_back(10);
	ints.push_back(20);
	ints.push_back(30);
	ints.push_back(40);
	ints.push_back(50);

	easyfind(ints, 30);
	easyfind(ints, 60);
}
{
	std::array<int, 3> ints = {10, 20, 30};

	easyfind(ints, 10);
	easyfind(ints, 97);
}
	return 0;
}