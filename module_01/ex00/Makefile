NAME = zombie
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = newZombie.cpp main.cpp Zombie.cpp randomChump.cpp 
OBJS = $(SRCS:%.cpp=obj/%.o)

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

obj/%.o: %.cpp
	@mkdir -p obj
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rdf obj

fclean: clean
	rm -f $(NAME)

re: fclean all