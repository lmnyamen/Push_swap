/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 17:52:57 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/18 16:39:00 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		*ft_tab(t_plist **alst)
{
	int		i;
	int		*tab;
	t_plist	*lst;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (plst_size(alst) + 1));
	lst = *alst;
	while (lst)
	{
		tab[i++] = lst->data;
		lst = lst->next;
	}
	sort_int_tab(tab, (unsigned int)plst_size(alst));
	return (tab);
}

int				ft_median(t_plist **alst)
{
	int		*tab;
	int		i;

	i = 0;
	tab = ft_tab(alst);
	while (i < ((int)plst_size(alst) - 1) / 2)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	i = tab[i];
	free(tab);
	return (i);
}
