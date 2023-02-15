NAME = animals
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJS = $(SRCS:%.cpp=obj/%.o)
HEAD = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

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
	rm -f $(NAME)

re: fclean all