CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = rush-02
HDIR = includes
#SRCS = 
#OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -I$(HDIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(HDIR)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

.PHONY: all clean fclean
