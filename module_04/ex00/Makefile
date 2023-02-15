NAME = animal
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=obj/%.o)
HEAD = $(wildcard *.hpp)

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