#include "ft_test.h"
#include "ft.h"

// 인자를 2부터 10까지

int		main(int argc, char **argv)
{
	int		size;
	char	buf[22] = "abcdefghijklmnopqr";
	char	buf2[22] = "abcdefghijklmnopqr";
	char	*ret;
	char	*ret2;

	if (argc == 1)
		return (0);

	size = atoi(argv[1]);
	if (size < 2)
	{
		printf("size는 2이상\n");
		return(0);
	}
	size = 22;
	strcpy(buf, "abcdefghijklmnopqr");
	ret = memchr(buf, 'f', size);
	printf("%s\n", ret);
	strcpy(buf2, "abcdefghijklmnopqr");
	ret2 = ft_memchr(buf2, 'f', size);
	printf("%s\n", ret2);

	strcpy(buf, "abcdefghijklmnopqr");
	ret = memchr(buf, 'a', size);
	printf("%s\n", ret);
	strcpy(buf2, "abcdefghijklmnopqr");
	ret2 = ft_memchr(buf2, 'a', size);
	printf("%s\n", ret2);

	strcpy(buf, "abcdefghijklmnopqr");
	ret = memchr(buf, 'z', size);
	printf("%s\n", ret);
	strcpy(buf2, "abcdefghijklmnopqr");
	ret2 = ft_memchr(buf2, 'z', size);
	printf("%s\n", ret2);

	strcpy(buf, "abcdefghijklmnopqr");
	ret = memchr(buf, 'r', size);
	printf("%s\n", ret);
	strcpy(buf2, "abcdefghijklmnopqr");
	ret2 = ft_memchr(buf2, 'r', size);
	printf("%s\n", ret2);


	return (0);
}
