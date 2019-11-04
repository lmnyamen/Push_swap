/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:24:23 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/04 10:47:13 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	while (i < n)
	{
		to[i] = from[i];
		if (from[i] == (unsigned char)c)
			return ((char *)&dst[i + 1]);
		i++;
	}
	return (NULL);
}
