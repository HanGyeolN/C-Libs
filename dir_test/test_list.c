#include "ft.h"
#include "ft_test.h"

void	del(void *content)
{
	free(content);
}

void	test(void *str)
{
	int		i;

	i = 0;
	*(char *)str = 'A';
}

int	main(int argc, char **argv)
{
	t_list	**list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*last;
	t_list	*n4;
	char	*test_str;
	int		len;

	if (argc || argv)
		printf("./test_lstnew <n1> <n2> <n3> <n4>\n");
	n1 = ft_lstnew((void *)argv[1]);
	list = &n1;

	n2 = ft_lstnew((void *)argv[2]);
	ft_lstadd_front(list, n2);

	n3 = ft_lstnew((void *)argv[3]);
	ft_lstadd_front(list, n3);

	test_str = malloc(10);
	strcpy(test_str, "hello war");

	n4 = ft_lstnew((void *)test_str);	
	ft_lstadd_back(list, n4);

	last = ft_lstlast(n1);

	while (*list)
	{
		printf("%s -> ", (char *)(*list)->content);
		*list = (*list)->next;
	}
	printf("%s\n", (char *)(*list));

	len = ft_lstsize(n3);
	printf("ft_lstsize: %d\n", len);

	printf("ft_lstlast: %s\n", (char *)last->content);

	ft_lstiter(n3, &test);
//	ft_lstclear(list, &del);
	list = &n3;
	while (*list)
	{
		printf("%s -> ", (char *)(*list)->content);
		*list = (*list)->next;
	}
	printf("%s\n", (char *)(*list));

	return (0);
}
