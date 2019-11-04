/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:28:09 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/11 12:25:29 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_p(t_plist **alst, t_plist **blst, char s)
{
	if (s == 'a')
		ft_push(blst, alst);
	else
		ft_push(alst, blst);
	ft_putchar('p');
	ft_putchar(s);
	ft_putchar('\n');
}
