#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class	Bureaucrat {

public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& src);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& rhs);

	void signForm(Form& form);
	
	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

	class	GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};

private:

	const std::string	_name;
	int					_grade;

};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif