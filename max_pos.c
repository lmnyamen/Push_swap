/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:36:34 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/11 12:46:02 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		max_pos(t_plist **alst, int max, int nxt)
{
	int		p;
	t_plist	*tmp;

	p = 0;
	tmp = *alst;
	while (tmp)
	{
		if (tmp->data == max || tmp->data == nxt)
			break ;
		tmp = tmp->next;
		p++;
	}
	return (p);
}
