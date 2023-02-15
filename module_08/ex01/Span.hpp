#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>

class	Span {

public:

	Span();
	Span(unsigned int N);
	Span(const Span& src);
	~Span();

	Span& operator=(const Span& rhs);

	void addNumber(int number);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
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

	unsigned int		_N;
	std::vector<int>	_nums;

};

#endif