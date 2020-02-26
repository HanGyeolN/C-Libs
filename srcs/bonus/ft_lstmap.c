/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 00:36:31 by hna               #+#    #+#             */
/*   Updated: 2020/02/27 00:50:59 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	void	*tmp;

	while (lst)
	{
		if (!(tmp = f(lst->content)))
			return (0);
		new = malloc(sizeof(t_list));
		new->content = tmp;
		temp = lst->next;
		lst->next = new;
		new->next = temp;
		lst = temp;
	}
}
