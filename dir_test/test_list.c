#include "ft.h"
#include "ft_test.h"

int	main(int argc, char **argv)
{
	t_list	**list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	if (argc || argv)
		printf("./test_lstnew <n1> <n2> <n3>\n");
	n1 = ft_lstnew((void *)argv[1]);
	list = &n1;

	n2 = ft_lstnew((void *)argv[2]);
	ft_lstadd_front(list, n2);

	n3 = ft_lstnew((void *)argv[3]);
	ft_lstadd_front(list, n3);

	while (*list)
	{
		printf("%s\n", (char *)(*list)->content);
		*list = (*list)->next;
	}
	return (0);
}
