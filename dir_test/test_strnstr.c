#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	char	*haystack;
	char	*needle;
	char	*ret;
	char	*ret2;
	size_t	len;

	if (argc == 1)
	{
		printf("./test_strnstr <haystack> <needle> <len>\n");
		return (0);
	}
	needle = argv[2];
	haystack = argv[1];
	len = (size_t)atoi(argv[3]);
	ret = strnstr(haystack, needle, len);
	printf("ret1:%s\n", ret);
	ret2 = ft_strnstr(haystack, needle, len);
	printf("ret2:%s\n", ret2);

	return (0);
}
