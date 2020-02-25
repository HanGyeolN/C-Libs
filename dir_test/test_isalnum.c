#include "ft_test.h"
#include "ft.h"

int		main(void)
{
	int		i;

	printf("./test_isalnum\n");
	i = -10;
	while (i < 300)
	{
		if (isalnum(i) != ft_isalnum(i))
		{
			printf("diff in i = %d\n", i);
			return (0);
		}
		i++;
	}
	return (0);
}
