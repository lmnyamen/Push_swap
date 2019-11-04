/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmnyamen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:09:52 by lmnyamen          #+#    #+#             */
/*   Updated: 2019/08/29 12:59:51 by lmnyamen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_read(char **str, const int fd)
{
	int		ret;
	char	*buffer;
	char	*end;

	buffer = ft_strnew(BUFF_SIZE);
	end = NULL;
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		if (*str == NULL)
			*str = ft_strnew(0);
		end = *str;
		*str = ft_strjoin(*str, buffer);
		free(end);
		if (ft_strchr(*str, '\n'))
			break ;
	}
	free(buffer);
	if (ret == 0 || ret < 0)
		return (0);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*str[FD_SIZE];
	char			*end;
	char			*tmp;
	int				ret;

	if (fd < 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	ret = ft_read(&str[fd], fd);
	if (ret == -1)
		return (-1);
	if (ret == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	end = ft_strchr(str[fd], '\n');
	*line = ft_strsub(str[fd], 0, ft_strlen(str[fd]) - ft_strlen(end));
	tmp = str[fd];
	str[fd] = ft_strsub(end, 1, ft_strlen(end) - 1);
	free(tmp);
	return (1);
}
