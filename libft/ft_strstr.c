/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:09:41 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/05 10:47:53 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	char	*hs;
	char	*nd;

	i = 0;
	hs = (char *)haystack;
	nd = (char *)needle;
	if (nd[0] == '\0')
		return (hs);
	while (hs[i])
	{
		j = 0;
		k = 0;
		while (nd[k] && nd[k] == hs[i + j])
		{
			k++;
			j++;
		}
		if (nd[k] == '\0')
			return (&hs[i]);
		i++;
	}
	return (0);
}
