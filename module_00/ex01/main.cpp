#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
// #include <string>
// #include <fstream>

#define BLACK "\033[0;30m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"

static int	print(const char *color, const char *text) {
	std::cout << color << text << RESET;
	return (0);
}

int	main(int argc, char **argv)
{
	Phonebook	phonebook (0);
	std::string	input;

	if (argc != 1)
		return (0);
	print(BLACK, "\nADD: save a new contact\n");
	print(BLACK, "SEARCH: display a specific contact\n");
	print(BLACK, "EXIT: exit program\n\n");
	while (1) {
		print(CYAN, "Enter command: ");
		getline(std::cin, input);
		if (!std::cin)
			std::exit(EXIT_SUCCESS);
		if (input.compare("ADD") == 0)
			phonebook.add();
		else if (input.compare("SEARCH") == 0)
			phonebook.search();
		else if (input.compare("EXIT") == 0)
			std::exit(EXIT_SUCCESS);
		else
			print(BLACK, "Invalid input.\n");
		std::cout << std::endl;
	}
	return (0);
}