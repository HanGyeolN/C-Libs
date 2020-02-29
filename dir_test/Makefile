CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER_DIR = ../includes
SRC_PART1 = ft_memset.c	\
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
		ft_atoi.c	\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_calloc.c	\
		ft_strdup.c
SRC_PART1_DIR = ../srcs/part1
SRCS_PART1 = $(addprefix $(SRC_PART1_DIR)/, $(SRC_PART1))
TEST_PART1 = $(SRC_PART1:ft_%.c=test_%)

SRC_PART2 = ft_substr.c	\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c	\
			ft_itoa.c	\
			ft_strmapi.c\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c
SRC_PART2_DIR = ../srcs/part2
SRCS_PART2 = $(addprefix $(SRC_PART2_DIR)/, $(SRC_PART2))
TEST_PART2 = $(SRC_PART2:ft_%.c=test_%)

SRC_PART3 = ft_lstnew.c	\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		

SRC_PART3_DIR = ../srcs/bonus
SRCS_PART3 = $(addprefix $(SRC_PART3_DIR)/, $(SRC_PART3))
TEST_PART3 = $(SRC_PART3:ft_%.c=test_%)

SRCS = $(SRCS_PART1) $(SRCS_PART2) $(SRCS_PART3)
TESTS = $(TEST_PART1) $(TEST_PART2) $(TEST_PART3)

% : %.c
	$(CC) $(CFLAGS) $^ $(SRCS) -I $(HEADER_DIR) -o $@

clean :
	rm -f d1 d2

fclean : clean
	rm -f $(TESTS)

re : fclean all
