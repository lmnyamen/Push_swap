/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:20:00 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/08/29 17:21:18 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prr(t_plist **alst, char s)
{
	ft_rev_rotate(alst);
	ft_putstr("rr");
	ft_putchar(s);
	ft_putchar('\n');
}
