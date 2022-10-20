NAME = bureaucrat
FLAG = -Wall -Werror -Wextra -I -std=c++98
SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS = $(SRCS:%.cpp=obj/%.o)
HEAD = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAG) $^ -o $@

obj/%.o: %.cpp $(HEAD)
	@mkdir -p obj
	c++ $(FLAG) -c $< -o $@

clean:
	rm -rdf obj

fclean: clean
	rm -f $(NAME)

re: fclean all