#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <cmath>
# include <limits>

# define GREY "\033[0;30m"
# define RESET "\033[0m"

class	Converter {

public:

	Converter();
	Converter(Converter const & src);
	~Converter();

	Converter& operator=(Converter const & rhs);

	void	convert(std::string input);

private:

	int		_i;
	float	_f;
	double	_d;

	bool	exception_c;		
	bool	exception_i;		
	bool	exception_f;		
	bool	exception_d;			

	bool detectInt(std::string input);
	bool detectFloat(std::string input);
	bool detectDouble(std::string input);

	void convertFromInt();
	void convertFromFloat();
	void convertFromDouble();
};

#endif