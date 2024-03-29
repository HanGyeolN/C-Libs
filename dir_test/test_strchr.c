#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		target;
	char	buf[22];
	char	buf2[22];
	char	*ret;
	char	*ret2;

	if (argc == 1)
		return (0);
	target = argv[1][0];
	strcpy(buf, "abcdefgabcdefgmnopqr");
	ret = strchr(buf, 'f');
	printf("%s\n", ret);
	strcpy(buf2, "abcdefgabcdefgmnopqr");
	ret2 = ft_strchr(buf2, 'f');
	printf("%s\n", ret2);

	strcpy(buf, "abcdefgabcdefgmnopqr");
	ret = strchr(buf, 'a');
	printf("%s\n", ret);
	strcpy(buf2, "abcdefgabcdefgmnopqr");
	ret2 = ft_strchr(buf2, 'a');
	printf("%s\n", ret2);

	strcpy(buf, "abcdefgabcdefgmnopqr");
	ret = strchr(buf, 'z');
	printf("%s\n", ret);
	strcpy(buf2, "abcdefgabcdefgmnopqr");
	ret2 = ft_strchr(buf2, 'z');
	printf("%s\n", ret2);

	strcpy(buf, "abcdefgabcdefgmnopqr");
	ret = strchr(buf, 'r');
	printf("%s\n", ret);
	strcpy(buf2, "abcdefgabcdefgmnopqr");
	ret2 = ft_strchr(buf2, 'r');
	printf("%s\n", ret2);

	return (0);
}
