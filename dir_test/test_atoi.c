#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	if (argc || argv)
		printf("./test_atoi <str>\n");
	printf("ans: %d\nret: %d\n", atoi(argv[1]), ft_atoi(argv[1]));
	return (0);
}
