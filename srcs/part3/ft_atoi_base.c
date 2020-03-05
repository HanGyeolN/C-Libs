/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:59:51 by hna               #+#    #+#             */
/*   Updated: 2020/03/05 12:22:50 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int				is_in(char target, const char *ref)
{
	int i;

	i = -1;
	while (ref[++i])
		if (target == ref[i])
			return (i);
	return (-1);
}

int		ft_atoi_base(const char *s, const char *base)
{
	int		i;
	int		ret;
	int		sign;
	int		base_len;
	int		base_num;

	i = 0;
	ret = 0;
	sign = 1;
	base_len = ft_strlen((char *)base);
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while ((base_num = is_in(s[i], base)) != -1)
	{
		ret = ret * base_len + base_num * sign;
		i++;
	}
	return (ret);
}
