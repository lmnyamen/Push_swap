/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 09:18:08 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/08/02 09:24:04 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_plist **alst)
{
	t_plist	*temp;
	t_plist	*lst;

	lst = *alst;
	if (!lst || !lst->next)
		return ;
	while (lst->next->next)
		lst = lst->next;
	if (lst && lst->next)
	{
		temp = lst->next;
		temp->next = *alst;
		lst->next = NULL;
		*alst = temp;
	}
}
