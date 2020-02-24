#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		size;
	int		*buf;
	int		*buf2;
	int		*src;
	int		*ret;
	int		*ret2;

	if (argc == 1)
		return (0);

	size = atoi(argv[1]);
	if (size < 2)
	{
		printf("size는 2이상\n");
		return(0);
	}
	buf = malloc(sizeof(int) * size);
	buf2 = malloc(sizeof(int) * size);
	src = malloc(sizeof(int) * size);

	memset(buf, 42, size);
	memset(buf2, 42, size);
	memset(src, 'a', size);

	fd = open("d1", O_WRONLY | O_CREAT, 0744);
	ret = memcpy(buf, src, size - 2);
	write(fd, buf, size);
	close(fd);

	fd = open("d2", O_WRONLY | O_CREAT, 0744);
	ret2 = ft_memcpy(buf2, src, size - 2);
	write(fd, buf2, size);
	close(fd);

	int i = 0;
	while (i < size)
	{
		printf("%d, %d\n", buf[i], buf2[i]);
		i++;
	}
	i = 0;
	printf("return value check\n");
	while (i < size)
	{
		printf("%d, %d\n", ret[i], ret2[i]);
		i++;
	}
	free(buf);
	free(buf2);
}
