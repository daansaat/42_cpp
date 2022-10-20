#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("", 145, 137) {

	std::cout << GREY << "[SCForm] Default constructor called." << RESET << std::endl;
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
: Form(name, 145, 137) {

	std::cout << GREY << "[SCForm] String constructor called." << RESET << std::endl;
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) {

	std::cout << GREY << "[SCForm] Copy constructor called." << RESET << std::endl;
	*this = src;
	return;
}



ShrubberyCreationForm::~ShrubberyCreationForm() {

	std::cout << GREY << "[SCForm] Destructor called." << RESET << std::endl;
	return;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {

	std::cout << GREY << "[SCForm] assignment operator called." << RESET << std::endl;
	this->setSigned(rhs.getSigned());
	return *this;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (!this->getSigned())
		throw(FormNotSigned());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException());

	std::ofstream outfile(this->getName() + "_shrubbery");
	if (!outfile.is_open()) {
		std::cout << "Couldn't open" << this->getName() + "_shrubbery" << std::endl;
		return;
	}
	outfile <<
	"            .        +          .      .          .\n"
	"     .            _        .                    .\n"
	"  ,              /;-._,-.____        ,-----.__\n"
	" ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
	"  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
	"                      ,    `./  \\:. `.   )==-'  .\n"
	"    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
	".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
	"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
	"  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
	"   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
	"              \\:  `  X` _| _,\\/'   .-'\n"
	".               \":._:`\\____  /:'  /      .           .\n"
	"                    \\::.  :\\/:'  /              +\n"
	"   .                 `.:.  /:'  }      .\n"
	"           .           ):_(:;   \\           .\n"
	"                      /:. _/ ,  |\n"
	"                   . (|::.     ,`                  .\n"
	"     .                |::.    {\\\n"
	"                      |::.\\  \\ `.\n"
	"                      |:::(\\    |\n"
	"              O       |:::/{ }  |                  (o\n"
	"               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
	"          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	// std::cout << "created " << this->getName() + "_shrubbery" << " file" << std::endl;
	outfile.close();
	return;
}

