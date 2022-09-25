#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <sstream>
#include <string>
#include <fstream>

static void	cmd_add(Phonebook *phonebook, int *index) {
	phonebook->add(*index);
	std::cout << "\033[0;30mContact added to phonebook.\033[0m" << std::endl;
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
		std::cout << "\033[0;30mNo saved contacts.\033[0m" << std::endl;
	else {
		std::cout << "\033[0;30mSelect index to view entry: \033[0m";
		while (!get_integer(&index) || index > 8) {
			std::cout << "\033[0;31minvalid index\033[0m" << std::endl;
			std::cout << "\033[0;30mSelect index to view entry: \033[0m";
		}
		if (!phonebook->search(index - 1))
			std::cout << "\033[0;30mNo entry.\033[0m" << std::endl;
	}
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;
	int			index;

	std::cout << "\n\033[0;30mADD: save a new contact\n";
	std::cout << "SEARCH: display a specific contact\n";
	std::cout << "EXIT: exit program\033[0m\n\n";
	index = 0;
	while (1) {
		std::cout << "\033[0;36mEnter command: \033[0m";
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			cmd_add(&phonebook, &index);
		else if (input.compare("SEARCH") == 0)
			cmd_search(&phonebook);
		else if (input.compare("EXIT") == 0)
			std::exit(EXIT_SUCCESS);
		else
			std::cout << "\033[0;30mInvalid input.\n\033[0m";
		std::cout << std::endl;
	}
	return (0);
}