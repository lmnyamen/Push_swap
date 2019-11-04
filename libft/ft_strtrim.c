/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:27:22 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/06/20 16:27:21 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[j] && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j++;
	if (j == ft_strlen((char *)s))
		return (ft_strnew(1));
	i = 0;
	while (s[j + i])
		i++;
	i--;
	while (s[j + i] && (s[j + i] == ' ' ||
				s[j + i] == '\n' || s[j + i] == '\t'))
		i--;
	i++;
	if ((str = ft_strsub(s, j, i)) == NULL)
		return (NULL);
	return (str);
}
