#include "strReplace.hpp"

void	ft_strReplace(std::string *newline, std::string s1, std::string s2) {
	std::size_t index = 0;
	std::size_t found = -1;
	while (index < newline->length()) {
		index = newline->find(s1, found + 1);
		found = index;
		if (index != std::string::npos) {
			*newline = newline->substr(0, index) + s2 
			+ newline->substr(index + s1.length(), newline->length());
		}
	}
}