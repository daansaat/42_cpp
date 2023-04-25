NAME = PmergeMe
CXX = g++
FLAG = -std=c++98
# FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=obj/%.o)
HEAD = $(wildcard *.hpp)

all: $(NAME)

run: all
	./$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAG) $^ -o $@

obj/%.o: %.cpp $(HEAD)
	@mkdir -p obj
	$(CXX) $(FLAG) -c $< -o $@

clean:
	rm -rdf obj

fclean: clean
	rm -f $(NAME)

re: fclean all
