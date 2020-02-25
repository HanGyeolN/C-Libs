#include "ft.h"
#include "ft_test.h"

int	main(int argc, char **argv)
{
	char	*ret;

	if (argc || argv)
		printf("./test_strtrim <s1> <set>\n");
	/*
	ret = strtrim(argv[1], argv[2]);
	printf("ans: %s\n", ret);
	free(ret);*/
	ret = ft_strtrim(argv[1], argv[2]);
	printf("ret: %s\n", ret);
	free(ret);
	return (0);
}
