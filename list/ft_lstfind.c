/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansimoe <dansimoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 23:31:47 by dansimoe          #+#    #+#             */
/*   Updated: 2025/12/18 23:32:11 by dansimoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstfind(t_list *lst, void *tofind)
{
	int	n;

	if (!lst || !tofind)
		return (0);
	n = 1;
	while (lst)
	{
		if (*(int *)lst->content == *(int *)tofind)
			return (n);
		lst = lst->next;
		n++;
	}
	return (0);
}
