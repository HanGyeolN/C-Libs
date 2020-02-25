#include "ft_test.h"
#include "ft.h"

int		main(void)
{
	int		i;
	int		ret;
	int		ans;

	printf("./test_isprint\n");
	i = -10;
	while (i < 300)
	{
		ret = ft_isprint(i);
		ans = isprint(i);
		printf("i: %d, ret: %d, ans: %d\n", i, ret, ans);
		if (isprint(i) != ft_isprint(i))
		{
			printf("diff in i = %d\n", i);
			return (0);
		}
		i++;
	}
	return (0);
}
