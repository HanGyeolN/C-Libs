#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	size_t	size;
	char	buf[40] = "abcdefghijklmnopqr";
	char	buf2[40] = "abcdefghijklmnopqr";
	size_t	ret;
	size_t	ret2;

	if (argc == 1)
		return (0);
	size = atoi(argv[1]);
	ret = ft_strlcat(buf, "0123456789", size);
	printf("%s, ret : %d\n", buf, (int)ret);

	ret2 = strlcat(buf2, "0123456789", size);
	printf("%s, ret2: %d\n", buf2, (int)ret2);

	return (0);
}
