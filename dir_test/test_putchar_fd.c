#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;

	if (argc || argv)
		printf("./test_putchar_fd <char>\n");
	fd = open("d1", O_WRONLY | O_CREAT, 0744);
	ft_putchar_fd(argv[1][0], fd);
	close(fd);
	return (0);
}
