#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"

class Phonebook {
	Contact contact[8];
	public:
		void add(int index);
		bool search();
		bool search(int index);
};

#endif
