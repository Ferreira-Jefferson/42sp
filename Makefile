NAME = testar
SRC = main.c
OBJS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.c: %.o
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all