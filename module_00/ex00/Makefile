NAME = megaphone
FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp
OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

$(OBJS): $(SRCS)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all