/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:05:13 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/04 10:46:58 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*to;
	char	*from;
	size_t	i;

	to = (char *)dst;
	from = (char *)src;
	i = 0;
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		i = len;
		while (i-- > 0)
			to[i] = from[i];
	}
	else
	{
		while (len > i)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (dst);
}
