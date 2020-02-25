#include "ft.h"
#include "ft_test.h"

char		*strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;
	int		i;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = -1;
	if (str)
	{
		while (*s1)
			str[++i] = *s1++;
		while (*s2)
			str[++i] = *s2++;
	}
	str[++i] = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	char	*ret;

	if (argc || argv)
		printf("./test_strjoin <s1> <s2>\n");
	ret = strjoin(argv[1], argv[2]);
	printf("ans: %s\n", ret);
	free(ret);
	ret = ft_strjoin(argv[1], argv[2]);
	printf("ret: %s\n", ret);
	free(ret);
	return (0);
}
