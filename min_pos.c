/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_post.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:08:00 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/11 12:46:42 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		min_pos(t_plist **alst, int min)
{
	int		p;
	t_plist	*tmp;

	p = 0;
	tmp = *alst;
	while (tmp && tmp->data != min)
	{
		tmp = tmp->next;
		p++;
	}
	return (p);
}
