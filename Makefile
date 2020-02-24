CC = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRC = *.c
SRC_DIR = srcs/part1
HEADER_DIR = includes

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(SRCS:%.c=%.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $^

test :
	$(CC) $(CFLAGS) dir_test/test.c $(SRCS) -I $(HEADER_DIR) -o test

tclean :
	rm -f d1 d2 test

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
