/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:03:36 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/07 09:42:48 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *pt;

	pt = (void *)malloc(sizeof(size_t) * size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, size);
	return (pt);
}
