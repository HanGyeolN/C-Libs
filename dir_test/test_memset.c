/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:41:39 by hna               #+#    #+#             */
/*   Updated: 2020/02/24 23:44:04 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		size;
	int	*buf;
	int	*buf2;

	if (argc == 1)
		return (0);
	size = atoi(argv[1]);
	buf = malloc(sizeof(int) * size);
	buf2 = malloc(sizeof(int) * size);
	fd = open("d1", O_WRONLY | O_CREAT, 0744);
	memset(buf, 42, size);
	write(fd, buf, size);
	close(fd);

	fd = open("d2", O_WRONLY | O_CREAT, 0744);
	ft_memset(buf2, 42, size);
	write(fd, buf2, size);
	close(fd);

	int i = 0;
	while (i < size)
	{
		printf("%d, %d\n", buf[i], buf2[i]);
		i++;
	}

	free(buf);
	free(buf2);
}
