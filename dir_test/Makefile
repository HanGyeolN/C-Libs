CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_memset.c	\
		ft_bzero.c	\
		ft_memcpy.c	\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_strlen.c	\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c	\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c
SRC_DIR = ../srcs/part1
HEADER_DIR = ../includes
SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
TESTS = $(SRC:ft_%.c=test_%)

% : %.c
	$(CC) $(CFLAGS) $^ $(SRCS) -I $(HEADER_DIR) -o $@

clean :
	rm -f d1 d2

fclean : clean
	rm -f $(TESTS)

re : fclean all
