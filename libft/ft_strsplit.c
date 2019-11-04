/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:27:57 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/27 12:17:46 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int			w_cnt(char const *s, char c)
{
	int		n;
	int		w;

	n = 0;
	w = 0;
	while (s[n])
	{
		while (s[n] == c && s[n])
			n++;
		if (s[n] != '\0')
			w++;
		while (s[n] != c && s[n])
			n++;
	}
	return (w);
}

char				**ft_strsplit(char const *s, char c, int i)
{
	char	**arr;
	int		r;
	int		j;

	r = 0;
	arr = NULL;
	if (w_cnt(s, c) == 0)
		return (arr);
	if (!s || !(arr = (char **)malloc(sizeof(char *) * (w_cnt(s, c) + 1))))
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0' || r == w_cnt(s, c) + 1)
			break ;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		arr[r] = ft_strsub(s, i, j);
		i += j;
		r++;
	}
	arr[r] = NULL;
	return (arr);
}
