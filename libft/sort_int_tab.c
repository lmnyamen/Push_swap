/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 13:23:02 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/01 17:46:43 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int temp;

	i = 0;
	temp = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j != i)
			{
				if (tab[i] < tab[j])
				{
					temp = tab[i];
					tab[i] = tab[j];
					tab[j] = temp;
				}
			}
			j++;
		}
		i++;
	}
}
