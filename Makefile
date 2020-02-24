CC = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRC = *.c
SRC_DIR = srcs
HEADER_DIR = includes

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(SRCS:%.c=%.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $^

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
