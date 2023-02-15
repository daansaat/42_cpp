NAME = fixed
FLAGS = -Wall -Werror -Wextra -I -std=c++98
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:%.cpp=obj/%.o)
HEAD = Fixed.hpp

all: $(NAME)

run: all
	./$(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

obj/%.o: %.cpp $(HEAD)
	@mkdir -p obj
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rfd obj

fclean: clean
	rm -f $(NAME)

re: fclean all