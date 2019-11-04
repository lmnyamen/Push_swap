/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:26:14 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/07 10:39:43 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) +
				ft_strlen((char *)s2) + 1));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	ft_strcat(str, (char *)s1);
	ft_strcat(str, (char *)s2);
	return (str);
}
