/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 22:14:03 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/10 11:51:28 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int diff;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	if (diff > 0)
		return (1);
	else if (diff < 0)
		return (-1);
	return (0);
}
