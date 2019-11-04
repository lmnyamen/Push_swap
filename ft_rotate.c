/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 09:24:31 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/20 08:49:45 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_plist **alst)
{
	t_plist	*temp;
	t_plist	*temp2;
	t_plist	*lst;

	lst = *alst;
	if (!lst || !lst->next)
		return ;
	if (lst && lst->next)
	{
		temp2 = lst->next;
		temp = lst->next;
		while (temp->next)
			temp = temp->next;
		temp->next = *alst;
		lst->next = NULL;
		*alst = temp2;
	}
}
