#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

public:

	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form& src);
	virtual ~Form();

	Form& operator=(const Form& rhs);

	void beSigned(const Bureaucrat& signer);
	virtual void execute(const Bureaucrat& executor) const = 0;

	const std::string	getName() const;
	bool				getSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;

	void				setSigned(const bool value);

	class	GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	FormNotSigned : public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:

	const std::string 	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif