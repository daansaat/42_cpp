#include "Contact.class.hpp"

static void get_usr_input(std::string *field, const char *str) {
	while (field->empty()) {
		std::cout << str << ": ";
		getline(std::cin, *field);
		if (!std::cin)
			std::exit(EXIT_SUCCESS);
		if (field->empty())
			std::cout << "\033[0;31mmandatory field\n\033[0m";
	}
}

void Contact::set_info() {
	get_usr_input(&firstname, "First name");
	get_usr_input(&lastname, "Last name");
	get_usr_input(&nickname, "Nickname");
	get_usr_input(&phonenumber, "Phonenumber");
	get_usr_input(&darkestsecret, "Darkest secret");
}

std::string Contact::get_fn(void) {return (firstname);}

std::string Contact::get_ln(void) {return (lastname);}

std::string Contact::get_nn(void) {return (nickname);}

std::string Contact::get_pn(void) {return (phonenumber);}

std::string Contact::get_ds(void) {return (darkestsecret);}
