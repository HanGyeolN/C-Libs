#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;

	if (argc || argv)
		printf("./test_putendl_fd <str>\n");
	fd = open("d1", O_WRONLY | O_CREAT, 0744);
	ft_putendl_fd(argv[1], fd);
	close(fd);
	return (0);
}
