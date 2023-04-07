CC = gcc
NAME = bsq
SRCS = srcs/main.c srcs/solve.c srcs/find_answer.c srcs/find_answer2.c srcs/map_read.c srcs/map_read2.c srcs/error.c srcs/my_string.c srcs/my_string2.c
HEADER = includes

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@ -I $(HEADER)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean all
