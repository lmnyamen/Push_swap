/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 08:57:44 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/11 12:29:01 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_node(t_plist **alst)
{
	t_plist	*lst;
	t_plist	*temp;

	lst = *alst;
	if (lst && lst->next)
	{
		temp = lst->next;
		lst->next = temp->next;
		temp->next = lst;
		*alst = temp;
	}
}
