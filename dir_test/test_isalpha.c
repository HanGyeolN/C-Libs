#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "ft.h"

void	t_isalpha(char m)
{
	int		test_n;
	int		res;

	test_n = -10;
	while (test_n < 300)
	{
		if (m == 'a')
			res = isalpha(test_n);
		else
			res = ft_isalpha(test_n);
		printf("%d\n", res);
		test_n++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (strcmp(argv[1], "ans") == 0)
	{
		t_isalpha('a');
	}
	else
	{
		t_isalpha('b');
	}
	return (0);
}
