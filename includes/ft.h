/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 19:18:11 by hna               #+#    #+#             */
/*   Updated: 2020/02/24 23:26:02 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	bzero(void *s, size_t n);
int		ft_strlen(char *str);
int		ft_isalpha(int c);

#endif
