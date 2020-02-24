CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_memset.c	\
		ft_bzero.c
SRC_DIR = ../srcs/part1
HEADER_DIR = ../includes
SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
TESTS = test_memset test_bzero

% : %.c
	$(CC) $(CFLAGS) $^ $(SRCS) -I $(HEADER_DIR) -o $@

clean :
	rm -f d1 d2

fclean : clean
	rm -f $(TESTS)

re : fclean all
