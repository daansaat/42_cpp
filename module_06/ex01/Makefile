NAME = serialization
FLAG = -Wall -Werror -Wextra -I -std=c++98
SRCS = main.cpp Data.cpp
OBJS = $(SRCS:%.cpp=obj/%.o)
HEAD = Data.hpp

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

