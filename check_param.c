/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 20:42:38 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/10/01 14:46:55 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		word_count(char *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
		{
			if (s[i])
				count++;
			while (s[i] && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
				i++;
		}
	}
	return (count);
}

int		repeat(char **arr, char *find, int pos)
{
	int i;

	i = 0;
	while (arr[i])
	{
		if (ft_strcmp(arr[i], find) == 0 && i != pos)
			return (1);
		i++;
	}
	return (0);
}

int		isstrnum(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '-' && i != 0)
			return (0);
		if (s[0] != '-' && (ft_isdigit(s[i]) == 0))
			return (0);
		if (ft_atol(s) < -2147483648 || ft_atol(s) > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

int		param(char *s)
{
	int		i;
	char	**arr;

	i = 0;
	arr = ft_strsplit(s, ' ', 0);
	while (arr[i])
	{
		if (!(isstrnum(arr[i])))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		if (repeat(arr, arr[i], i))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		i++;
	}
	ft_arraydel(arr);
	return (1);
}

int		check_param(char **av, int i)
{
	while (av[i])
	{
		if (word_count(av[i]) > 1)
		{
			if (!param(av[i]))
				return (0);
			i++;
		}
		else
		{
			if (!isstrnum(av[i]))
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			if (repeat(av, av[i], i))
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			i++;
		}
	}
	return (1);
}
