/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:20:51 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/10/01 11:13:23 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ok_ko(t_plist *alst, t_plist *blst)
{
	if (issorted(alst) && !blst)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

void	execute(t_plist **alst, t_plist **blst, char *s)
{
	if (ft_strcmp(s, "sa") == 0)
		ft_swap_node(alst);
	else if (ft_strcmp(s, "sb") == 0)
		ft_swap_node(blst);
	else if (ft_strcmp(s, "ss") == 0)
		ft_css(alst, blst);
	else if (ft_strcmp(s, "pb") == 0)
		ft_push(alst, blst);
	else if (ft_strcmp(s, "pa") == 0)
		ft_push(blst, alst);
	else if (ft_strcmp(s, "ra") == 0)
		ft_rotate(alst);
	else if (ft_strcmp(s, "rb") == 0)
		ft_rotate(blst);
	else if (ft_strcmp(s, "rra") == 0)
		ft_rev_rotate(alst);
	else if (ft_strcmp(s, "rrb") == 0)
		ft_rev_rotate(blst);
	else if (ft_strcmp(s, "rr") == 0)
		ft_crr(alst, blst);
	else if (ft_strcmp(s, "rrr") == 0)
		ft_crrr(alst, blst);
}

int		is_rule(char *s)
{
	if (ft_strcmp(s, "sa") == 0 || ft_strcmp(s, "sb") == 0\
			|| ft_strcmp(s, "ss") == 0 || ft_strcmp(s, "pa") == 0 ||\
			ft_strcmp(s, "pb") == 0 || ft_strcmp(s, "ra") == 0 ||\
			ft_strcmp(s, "rb") == 0 || ft_strcmp(s, "rr") == 0 ||\
			ft_strcmp(s, "rra") == 0 || ft_strcmp(s, "rrb") == 0 ||\
			ft_strcmp(s, "rrr") == 0)
		return (1);
	return (0);
}

int		checker(t_plist **alst, t_plist **blst)
{
	char *line;

	while (get_next_line(0, &line))
	{
		if (is_rule(line))
			execute(alst, blst, line);
		else
		{
			ft_putendl("Error");
			ft_strdel(&line);
			return (0);
		}
		ft_strdel(&line);
	}
	ok_ko(*alst, *blst);
	plstdel(alst);
	return (0);
}
