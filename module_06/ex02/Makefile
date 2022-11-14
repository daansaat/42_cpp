NAME = identify
FLAG = -Wall -Werror -Wextra -I -std=c++98
SRCS = main.cpp Base.cpp
OBJS = $(SRCS:%.cpp=obj/%.o)
HEAD = Base.hpp A.hpp B.hpp C.hpp

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

