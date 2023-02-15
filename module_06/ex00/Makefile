NAME = convert
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Converter.cpp
OBJS = $(SRCS:%.cpp=obj/%.o)
HEAD = Converter.hpp

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAG) $^ -o $@

obj/%.o: %.cpp $(HEAD)
	@mkdir -p obj
	c++ $(FLAG) -c $< -o $@

clean:
	rm -rdf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

