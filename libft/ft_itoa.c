/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 23:17:20 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/04 09:57:33 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_nbrlen(int n)
{
	size_t	i;

	i = 0;
	if (n == -2147483647)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		k;

	k = n;
	if (k == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_nbrlen(k);
	if (k < 0)
		k = -k;
	if (!(str = ft_strnew(i)))
		return (0);
	while (i-- >= 0)
	{
		str[i] = k % 10 + '0';
		k = k / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
