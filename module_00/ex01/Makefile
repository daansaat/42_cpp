NAME = phonebook
FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Phonebook.class.cpp Contact.class.cpp
OBJS = $(SRCS:.cpp=.o)

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