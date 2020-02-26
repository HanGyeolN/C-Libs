#include "ft.h"
#include "ft_test.h"

int	main(int argc, char **argv)
{
	char	*ret;

	if (argc || argv)
		printf("./test_itoa <int> \n");
	ret = ft_itoa(atoi(argv[1]));
	printf("ret: %s\n", ret);
	free(ret);
	return (0);
}
