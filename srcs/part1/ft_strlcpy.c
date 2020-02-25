/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:00:46 by hna               #+#    #+#             */
/*   Updated: 2020/02/25 15:41:16 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	while (i < dst_size)
	{
		dst[i] = src[i];
		i++;
	}
	if (dst_size != 0)
		dst[dst_size - 1] = '\0';
	return (src_size);
}
