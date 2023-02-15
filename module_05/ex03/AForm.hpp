#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm {

public:

	AForm();
	AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute);
	AForm(const AForm& src);
	virtual ~AForm();

	AForm& operator=(const AForm& rhs);

	void beSigned(const Bureaucrat& signer);
	virtual void execute(const Bureaucrat& executor) const = 0;

	std::string	getName() const;
	std::string	getTarget() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		setSigned(const bool value);

	class	GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};

	class	FormNotSigned : public std::exception {
		public:
			const char* what() const throw();
	};

private:

	const std::string 	_name;
	const std::string 	_target;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);

#endif