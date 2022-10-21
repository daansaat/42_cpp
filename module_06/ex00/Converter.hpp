#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <cmath>

# define GREY "\033[0;30m"
# define RESET "\033[0m"

class	Converter {

public:

	Converter();
	Converter(std::string input);
	Converter(Converter const & src);
	~Converter();

	Converter& operator=(Converter const & rhs);

	operator char() const;
	operator int() const;
	operator float() const;
	operator double() const;

private:

	std::string _input;
};

#endif