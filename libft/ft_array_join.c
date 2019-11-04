/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:45:32 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/27 17:37:22 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_array_join(char **arr, char *s)
{
	int		i;
	char	**new;

	i = 0;
	while (arr[i])
		i++;
	if (!(new = (char **)malloc(sizeof(char *) * (i + 2))))
		return (NULL);
	i = 0;
	while (arr[++i])
		new[i] = ft_strdup(arr[i]);
	new[i++] = ft_strdup(s);
	ft_strdel(&s);
	ft_arraydel(arr);
	return (new);
}
