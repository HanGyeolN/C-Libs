#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		size;
	char	buf[22] = "abcdefghijklmnopqr";
	char	buf2[22] = "abcdefghijklmnopqr";
	int		ret;

	if (argc == 1)
		return (0);

	size = atoi(argv[1]);
	strcpy(buf, "0123456aaaaa");
	printf("%s\n", buf);
	strcpy(buf2, "0123456AAAAA");
	printf("%s\n", buf2);
	ret = memcmp(buf, buf2, size);
	printf("memcmp(buf, buf2, %d)\n%d\n", size, ret);
	ret = ft_memcmp(buf, buf2, size);
	printf("ft_memcmp(buf, buf2, %d)\n%d\n", size, ret);

	return (0);
}
