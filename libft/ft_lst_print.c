/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 11:42:55 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/07/04 09:57:36 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lst_print(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		ft_putstr(temp->content);
		lst = temp->next;
	}
}
