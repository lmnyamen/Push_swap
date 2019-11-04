/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:57:59 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/04 10:47:10 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;
	char	a;

	i = 0;
	str = (char *)s;
	a = (char)c;
	while (n > 0)
	{
		if (str[i] == a)
			return ((char *)&str[i]);
		i++;
		n--;
	}
	return (NULL);
}
