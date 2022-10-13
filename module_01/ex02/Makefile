NAME = brain
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp
OBJS = main.o

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAG) $^ -o $@

%.o: %.cpp
	c++ $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all