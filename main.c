/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 12:31:31 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/10/01 11:19:43 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

static void		finish(t_plist **alst, t_plist **blst)
{
	if (issorted(*alst) && !blst)
	{
		plstdel(alst);
		return ;
	}
	push_swap(alst, blst);
	plstdel(alst);
}

int				main(int ac, char **av)
{
	t_plist	*alst;
	t_plist	*blst;

	if (ac >= 2)
	{
		if (ac > 2)
		{
			if (!check_param(av, 1))
				return (0);
			alst = ft_stack(av);
		}
		else
		{
			av = ft_strsplit(av[1], ' ', 0);
			if (av == 0)
				return (0);
			if (!check_param(av, 0))
				return (0);
			alst = ft_stack(av - 1);
			ft_arraydel(av);
		}
		finish(&alst, &blst);
		sleep(10);
	}
	else
		return (0);
}
