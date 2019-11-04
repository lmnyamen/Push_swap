/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 12:40:28 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/27 18:18:00 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstprint(t_plist **alst)
{
	t_plist	*tmp;

	tmp = *alst;
	while (tmp)
	{
		ft_putnbr(tmp->data);
		ft_putchar('\n');
		tmp = tmp->next;
	}
}
