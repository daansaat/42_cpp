NAME = harl
FLAGS = -Wall -Werror -Wextra -I -std=c++98
HEADER = Harl.hpp
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

obj/%.o: %.cpp $(HEADER)
	@mkdir -p obj
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rfd obj

fclean: clean
	rm -f $(NAME)

re: fclean all