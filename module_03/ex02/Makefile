NAME = fragtrap
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HEAD = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJS = $(SRCS:%.cpp=obj/%.o)

all: $(NAME)

run: all
	./$(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

obj/%.o: %.cpp $(HEAD)
	@mkdir -p obj
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rdf obj

fclean: clean
	rm $(NAME)

re: fclean all