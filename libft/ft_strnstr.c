/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:05:39 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/10 11:51:21 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*hs;
	char			*nd;

	hs = (char *)haystack;
	nd = (char *)needle;
	i = 0;
	if (nd[i] == 0)
		return (hs);
	while (hs[i] && i < len)
	{
		j = 0;
		while (nd[j] && hs[i + j] && nd[j] == hs[i + j] && j + i < len)
			j++;
		if (nd[j] == '\0')
			return (&hs[i]);
		i++;
	}
	return (NULL);
}
