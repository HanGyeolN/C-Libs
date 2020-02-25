#include "ft_test.h"
#include "ft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (*s)
	{
		while (s[start] != '\0' && len > 0)
		{
			str[i] = s[start + i];
			i++;
			len--;
		}
	}
	str[i] = '\0';
	return (str);
}

int		main(int argc, char **argv)
{
	char	*sub;

	if (argc || argv)
		printf("./test_substr <str> <start> <len>\n");
	sub = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
	printf("substr: %s\n", sub);
	free(sub);
	sub = ft_strsub(argv[1], atoi(argv[2]), atoi(argv[3]));
	printf("answer: %s\n", sub);
	free(sub);
	return (0);
}
