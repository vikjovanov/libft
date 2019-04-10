/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 21:35:03 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 20:41:36 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"
#include <stdio.h>
static int	buffer_read(const int fd, char **tab_fd)
{
	char	*tmp;
	char	buf[BUFF_SIZE + 1];
	char	*buff;
	int		ret;

	ret = 0;
	while (ft_strchr((const char*)tab_fd[fd], '\n') == NULL)
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) < 0)
			return (-1);
		if (ret == 0)
			return (0);
		buf[ret] = '\0';
		if ((buff = ft_strndup((const char*)buf, ret)) == NULL)
			return (-1);
		tmp = tab_fd[fd];
		tab_fd[fd] = ft_strjoin((const char*)tmp, (const char*)buff);
		ft_strdel(&tmp);
		ft_strdel(&buff);
		if (tab_fd[fd] == NULL)
			return (-1);
	}
	return (1);
}

static int	cpy_in_line(const int fd, char **tab_fd, char **line)
{
	char *tmp;
	char *new_adr;

	if (tab_fd[fd][0] == '\0')
	{
		ft_strdel(&(tab_fd[fd]));
		return (0);
	}
	if ((*line = ft_strndup((const char*)tab_fd[fd],
		ft_strclen((const char*)tab_fd[fd], '\n'))) == NULL)
		return (-1);
	if ((new_adr = ft_strchr((const char*)tab_fd[fd], '\n')) == NULL)
	{
		ft_strdel(&(tab_fd[fd]));
		return (1);
	}
	tmp = tab_fd[fd];
	tab_fd[fd] = ft_strdup((const char*)(new_adr + 1));
	ft_strdel(&tmp);
	if (tab_fd[fd] == NULL)
		return (-1);
	if (ft_strequ(tab_fd[fd], ""))
		ft_strdel(&(tab_fd[fd]));
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char *tab_fd[1024];
	int			res;

	if (fd > 1024 || fd < 0 || line == NULL)
		return (-1);
	tab_fd[fd] = (tab_fd[fd] != NULL) ? tab_fd[fd] : ft_strdup("");
	if (tab_fd[fd] == NULL)
		return (-1);
	res = buffer_read(fd, tab_fd);
	if (res == -1)
	{
		ft_strdel(&(tab_fd[fd]));
		return (-1);
	}
	return (cpy_in_line(fd, tab_fd, line));
}
