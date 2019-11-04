/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:33:33 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/20 08:51:18 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_three(t_plist **alst)
{
	int		x;
	int		y;
	int		z;

	if (!*alst || issorted(*alst))
		return ;
	x = (*alst)->data;
	y = (*alst)->next->data;
	z = (*alst)->next->next->data;
	if (x > y && y < z && x < z)
		ft_pswap(alst, 'a');
	else if (x > y && y > z && x > z)
	{
		ft_pswap(alst, 'a');
		ft_prr(alst, 'a');
	}
	else if (x > y && y < z && x > z)
		ft_pr(alst, 'a');
	else if (x < y && y > z && x < z)
	{
		ft_pswap(alst, 'a');
		ft_pr(alst, 'a');
	}
	else if (x < y && y > z && x > z)
		ft_prr(alst, 'a');
}

static void		ft_four(t_plist **alst, t_plist **blst)
{
	int		min;
	int		pos;

	if (!*alst || issorted(*alst))
		return ;
	min = min_value(alst);
	pos = min_pos(alst, min);
	if (pos <= (int)plst_size(alst) / 2)
		while ((*alst)->data != min)
			ft_pr(alst, 'a');
	else
		while ((*alst)->data != min)
			ft_prr(alst, 'a');
	ft_p(alst, blst, 'b');
	ft_three(alst);
	ft_p(alst, blst, 'a');
}

void			ft_five(t_plist **alst, t_plist **blst)
{
	int		min;
	int		pos;

	if (!*alst || issorted(*alst))
		return ;
	if (plst_size(alst) == 2)
		ft_pswap(alst, 'a');
	else if (plst_size(alst) == 3)
		ft_three(alst);
	else if (plst_size(alst) == 4)
		ft_four(alst, blst);
	else
	{
		min = min_value(alst);
		pos = min_pos(alst, min);
		if (pos <= (int)plst_size(alst) / 2)
			while ((*alst)->data != min)
				ft_pr(alst, 'a');
		else
			while ((*alst)->data != min)
				ft_prr(alst, 'a');
		ft_p(alst, blst, 'b');
		ft_four(alst, blst);
		ft_p(alst, blst, 'a');
	}
}
