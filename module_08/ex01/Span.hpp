#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>
# include <utility>
# include <ctime>
# include <cstdlib>

class	Span {

public:

	Span();
	Span(unsigned int N);
	Span(const Span& src);
	~Span();

	Span& operator=(const Span& rhs);

	void addNumber(int number);
	void addManyNumbers();
	int shortestSpan();
	int longestSpan();

	class	NoSpaceException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	NoSpanException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:

	std::vector<int>	_ints;
	size_t				_size;

};

#endif