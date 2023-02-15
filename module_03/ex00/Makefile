NAME = claptrap
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp ClapTrap.cpp
HEAD = ClapTrap.hpp
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