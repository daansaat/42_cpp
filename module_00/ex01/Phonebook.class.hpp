#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"

class Phonebook {
	Contact	contact[8];
	int		index;
	bool	print_phonebook();
	bool	print_contact(int index);
	public:
		Phonebook(int index);
		void	add();
		int		search();
};

#endif
