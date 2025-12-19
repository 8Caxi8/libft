/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dansimoe <dansimoe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 23:33:30 by dansimoe          #+#    #+#             */
/*   Updated: 2025/12/19 00:05:38 by dansimoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*c;

	if (!src)
		return (NULL);
	c = malloc (sizeof(char) * (ft_strlen(src) + 1));
	if (!c)
		return (NULL);
	i = -1;
	while (src[++i])
		c[i] = src[i];
	c[i] = '\0';
	return (c);
}
