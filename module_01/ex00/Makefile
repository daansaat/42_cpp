NAME = zombie
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = newZombie.cpp main.cpp Zombie.cpp randomChump.cpp 
OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all