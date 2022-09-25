#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <sstream>
#include <string>
#include <fstream>

#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"

static void	print(const char *color, const char *text) {
	std::cout << color << text << RESET;
}

static void	cmd_add(Phonebook *phonebook, int *index) {
	phonebook->add(*index);
	print(BLACK, "Contact added to phonebook\n");
	*index = (*index + 1) % 8;
}

static bool	get_integer(int *index) {
	std::string input;
	getline(std::cin, input);
	std::stringstream converter(input);
	int result;
	if (converter >> result) {
		char remaining;
		if (converter >> remaining) {
			return (false);
		}
		*index = result;
		return (true);
	}
	return (false);
}

static void	cmd_search(Phonebook *phonebook) {
	int			index;

	if (!phonebook->search())
		print(BLACK, "No saved contacts.\n");
	else {
		print(BLACK, "Select index to view entry: "); 
		if (get_integer(&index) && index >= 0 && index < 8) {
			if (!phonebook->search(index - 1))
				print(BLACK, "No entry.\n");
		}
		else
			print(RED, "invalid index\n");
	}
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;
	int			index;

	print(BLACK, "\nADD: save a new contact\n");
	print(BLACK, "SEARCH: display a specific contact\n");
	print(BLACK, "EXIT: exit program\n\n");
	index = 0;
	while (1) {
		print(CYAN, "Enter command: ");
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			cmd_add(&phonebook, &index);
		else if (input.compare("SEARCH") == 0)
			cmd_search(&phonebook);
		else if (input.compare("EXIT") == 0)
			std::exit(EXIT_SUCCESS);
		else
			print(BLACK, "Invalid input.\n");
		std::cout << std::endl;
	}
	return (0);
}