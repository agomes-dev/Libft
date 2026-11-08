NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS =

OBJS =

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

