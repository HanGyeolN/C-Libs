#include "ft_test.h"
#include "ft.h"

// 인자를 2부터 10까지

int		main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	*buf;
	char	*buf2;
	char	*src;
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
	buf = malloc(sizeof(char) * size);
	buf2 = malloc(sizeof(char) * size);
	src = malloc(sizeof(char) * size);

	memset(buf, '*', size);
	memset(buf2, 'b', size);
	memset(src, 'a', size);
	memcpy(buf, src, 5);

	fd = open("d1", O_WRONLY | O_CREAT, 0744);
	ret = memccpy(buf2, buf, '*', size - 2);

	printf("buf2: %s\n", buf2);
	printf("buf: %s\n", buf);
	printf("ret: %s\n", ret);
	write(fd, buf2, size);
	close(fd);

	memset(buf, '*', size);
	memset(buf2, 'b', size);
	memset(src, 'a', size);
	memcpy(buf, src, 5);

	printf("ft_memccpy function start\n");
	fd = open("d2", O_WRONLY | O_CREAT, 0744);
	ret2 = ft_memccpy(buf2, buf, '*', size - 2);

	printf("buf2: %s\n", buf2);
	printf("buf: %s\n", buf);
	printf("ret: %s\n", ret);
	write(fd, buf2, size);
	close(fd);

	free(src);
	free(buf);
	free(buf2);

	return (0);
}
