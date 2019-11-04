/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:21:50 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/04 10:47:01 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*to;
	unsigned char	*from;

	i = 0;
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if ((char *)dst == NULL && (char *)src == NULL)
		return (NULL);
	while ((i < n))
	{
		to[i] = from[i];
		i++;
	}
	return (dst);
}
