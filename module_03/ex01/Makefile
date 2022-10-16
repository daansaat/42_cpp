NAME = scavtrap
FLAG = -Wall -Werror -Wextra -I -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
HEAD = ClapTrap.hpp ScavTrap.hpp
OBJS = $(SRCS:%.cpp=obj/%.o)

all: $(NAME)

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