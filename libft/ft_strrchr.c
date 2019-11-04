/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 16:48:54 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/05 10:44:05 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ap;

	i = 0;
	ap = (char)c;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == ap)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == ap)
		return ((char *)&s[i]);
	return (NULL);
}
