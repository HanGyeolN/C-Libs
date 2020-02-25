#include "ft_test.h"
#include "ft.h"

int		main(void)
{
	char	*ans;
	char	*ret;

	printf("./test_strdup\n");
	ans = strdup("");
	ret = strdup("");
	printf("ans: %s\nres: %s\n", ans, ret);
	free(ans);
	free(ret);

	ans = strdup("abcscsdfsd");
	ret = strdup("abcscsdfsd");
	printf("ans: %s\nres: %s\n", ans, ret);
	free(ans);
	free(ret);

	return (0);
}
