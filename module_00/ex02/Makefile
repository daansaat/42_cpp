NAME = dreamjob
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = tests.cpp Account.cpp
OBJS = $(SRCS:%.cpp=%.o)

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