#include "ft.h"
#include "ft_test.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**ret;

	if (argc || argv)
		printf("./test_split <str> <c>\n");
	i = 0;
	ret = ft_split(argv[1], argv[2][0]);
	while (ret[i])
	{
		printf("ret[%d]: %s\n", i, ret[i]);
		i++;
	}
	printf("ret[%d]: %s\n", i, ret[i]);
	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (0);
}
