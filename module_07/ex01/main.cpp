#include "iter.hpp"

int	main(void) {

	int	n[5] = {1,2,3,4,5};
	float f[3] = {1.2,1.33,4.8723};
	char c[5] = {'a','b','c','d','e'};

	::iter(n, 5, ft_print);
	std::cout << std::endl;
	::iter(f, 3, ft_print);
	std::cout << std::endl;
	::iter(c, 5, ft_print);
	std::cout << std::endl;

	return 0;
}