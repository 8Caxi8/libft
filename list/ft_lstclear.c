/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansimoe <dansimoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:52:19 by dansimoe          #+#    #+#             */
/*   Updated: 2025/12/18 23:31:36 by dansimoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextone;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		nextone = (*lst)->next;
		if (del)
			del((*lst)->content);
		free(*lst);
		*lst = nextone;
	}
	nextone = NULL;
}
