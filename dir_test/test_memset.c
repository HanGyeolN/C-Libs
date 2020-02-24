/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:41:39 by hna               #+#    #+#             */
/*   Updated: 2020/02/24 22:56:44 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	*buf;
	char	*buf2;

	if (argc == 1)
		return (0);
	size = atoi(argv[1]);
	buf = malloc(sizeof(char) * size);
	buf2 = malloc(sizeof(char) * size);
	fd = open("d1", O_WRONLY | O_CREAT, 0744);
	memset(buf, 42, size);
	write(fd, buf, size);
	close(fd);

	fd = open("d2", O_WRONLY | O_CREAT, 0744);
	ft_memset(buf2, 42, size);
	write(fd, buf2, size);
	close(fd);
	free(buf);
	free(buf2);
}
