/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 21:10:51 by hna               #+#    #+#             */
/*   Updated: 2020/02/25 21:17:25 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (size == 0 || count == 0)
	{
		count = 1;
		size = 1;
	}
	ret = malloc(size * count);
	if (ret)
		ft_memset(ret, 0, size * count);
	return (ret);
}
