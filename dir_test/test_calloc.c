#include "ft_test.h"
#include "ft.h"

int		main(void)
{
	int	i;
	int	*s1;
	int	*s2;

	printf("./test_calloc diff in 3\n");
	i = 0;
	s1 = calloc(10, sizeof(int));
	s2 = ft_calloc(10, sizeof(int));
	// test
	s1[3] = 10;
	s2[3] = 11;
	while (i < 10)
	{
		if (s1[i] != s2[i])
			printf("diff in i: %d\n", i);
		i++;
	}
	free(s1);
	free(s2);
	return (0);
}
