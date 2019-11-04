/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 12:11:38 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/09/27 18:09:59 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_plist		*ps_node(int value)
{
	t_plist	*node;

	node = (t_plist *)malloc(sizeof(t_plist));
	node->data = value;
	node->next = NULL;
	return (node);
}

void		addnode(t_plist **alst, t_plist *new)
{
	t_plist	*lst;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	lst = *alst;
	while (lst->next)
		lst = lst->next;
	lst->next = new;
}

t_plist		*ft_stack(char **av)
{
	t_plist	*head;
	int		i;

	head = NULL;
	i = 1;
	while (av[i])
	{
		addnode(&head, ps_node(ft_atoi(av[i])));
		i++;
	}
	return (head);
}
