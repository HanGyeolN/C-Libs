#include "ft_test.h"
#include "ft.h"

int		main(void)
{
	int		i;

	printf("./test_isalpha\n");
	i = -10;
	while (i < 300)
	{
		if (isalpha(i) != ft_isalpha(i))
		{
			printf("diff in i = %d\n", i);
			return (0);
		}
		i++;
	}
	return (0);
}
