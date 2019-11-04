/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 09:31:28 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/08/02 09:37:20 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_plist **alst, t_plist **blst)
{
	t_plist	*temp;
	t_plist	*from;
	t_plist	*to;

	from = *alst;
	to = *blst;
	if (!from)
		return ;
	temp = from->next;
	if (!to)
	{
		from->next = NULL;
		to = from;
		from = temp;
		*blst = to;
		*alst = from;
	}
	else
	{
		from->next = to;
		*blst = from;
		*alst = temp;
	}
}
