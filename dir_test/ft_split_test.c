/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 01:24:11 by hna               #+#    #+#             */
/*   Updated: 2020/02/26 12:42:52 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
static int	split_len_idx(char *str, char c, int *s_idx)
{
	int		i;
	int		cnt;
	int		flag;

	i = 0;
	cnt = 0;
	flag = 1;
	while (str[i])
	{
		if (str[i] == c)
			flag = 1;
		else if (str[i] != c && flag == 1)
		{
			if (s_idx)
			{
				s_idx[cnt] = i;
				printf("s_idx[%d] = %d\n", cnt, i);
			}
			cnt++;
			flag = 0;
		}
		i++;
	}
	return (cnt);
}

static char	*ft_strsep(char *str, char c)
{
	int		i;
	int		len;
	char	*ret;

	i = 0;
	len = 0;
	while (str[len] != c && str[len] != '\0')
		len++;
	if (!(ret = malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_strlcpy(ret, str, len + 1);
	printf("ft_strlcpy('%s', '%s', %d)\n", ret, str, len+1);
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		*s_idx;
	int		cnt;
	int		i;

	i = -1;
	cnt = split_len_idx((char *)s, c, 0);
	if (!(s_idx = malloc(sizeof(int) * cnt)))
		return (0);
	split_len_idx((char *)s, c, s_idx);
//
	printf("input string: %s, sep: %c\n", s, c);
	printf("s_idx: ");
	while (++i < cnt)
		printf("%d ", s_idx[i]);
	printf("\n");
	i = -1;
//	return (0);

	if (!(ret = malloc(sizeof(char *) * (cnt + 1))))
	{
		free(s_idx);
		return (0);
	}
	printf("cnt: %d\n", cnt);
	while (++i < cnt)
	{
		ret[i] = ft_strsep((char *)&s[s_idx[i]], c);
		if (!ret[i])
		{
			while (--i >= 0)
				free(ret[i]);
		}
	}
	ret[cnt] = 0;
	//
	i = 0;
	while (ret[i])
	{
		printf("ret[%d]: %s\n", i, ret[i]);
		i++;
	}
	//
	free(s_idx);
	return (ret);
}
