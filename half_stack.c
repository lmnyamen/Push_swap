/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 09:02:47 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/11 13:49:09 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void		half_stack(t_plist **alst, t_plist **blst)
{
	int m;
	int i;
	int n;

	i = 0;
	m = ft_median(alst);
	n = (int)plst_size(alst);
	while (i <= n)
	{
		if ((*alst)->data > m)
			ft_pr(alst, 'a');
		else
			ft_p(alst, blst, 'b');
		i++;
	}
}
