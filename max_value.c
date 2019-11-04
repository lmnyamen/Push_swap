/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:06:20 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/11 12:45:26 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		max_value(t_plist **alst)
{
	int		max;
	t_plist	*tmp;

	tmp = *alst;
	max = tmp->data;
	while (tmp)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	return (max);
}
