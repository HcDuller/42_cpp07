NAME = main
CC = c++

CFLAGS = -Wall -Wextra -Werror -Wconversion -std=c++98 -g3

SRC = 	main.cpp

OBJ = $(SRC:.cpp=.o)

BLACK = \033[30m
RED = \033[31;1m
GREEN = \033[32;1m
YELLOW = \033[33;1m
BLUE = \033[34;1m
MAGENTA = \033[35;1m
CYAN = \033[36;1m
WHITE = \033[37;1m
RESET = \033[0m

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rfd $(NAME)

fclean: clean
	rm -rfd $(OBJ)

re: fclean all
