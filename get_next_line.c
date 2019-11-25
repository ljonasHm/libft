/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:19:48 by ljonas            #+#    #+#             */
/*   Updated: 2019/11/25 18:11:48 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_new_line(char **mas, char **line, int fd)
{
	char	*tmp;
	int		len;

	len = 0;
	while (mas[fd][len] != '\n' && mas[fd][len] != '\0')
		len++;
	if (mas[fd][len] == '\n')
	{
		*line = ft_strsub(mas[fd], 0, len);
		tmp = ft_strdup(mas[fd] + len + 1);
		free(mas[fd]);
		mas[fd] = tmp;
		if (mas[fd][0] == '\0')
			ft_strdel(&mas[fd]);
	}
	else if (mas[fd][len] == '\0')
	{
		*line = ft_strdup(mas[fd]);
		ft_strdel(&mas[fd]);
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char		*mas[FD_MAX];
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	int				ret;

	if (line == NULL || (fd < 0 && fd > FD_MAX))
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (mas[fd] == NULL)
			mas[fd] = ft_strnew(0);
		tmp = ft_strjoin(mas[fd], buff);
		free(mas[fd]);
		mas[fd] = tmp;
		if (ft_strchr(mas[fd], '\n') != NULL)
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (mas[fd] == NULL || mas[fd][0] == '\0'))
		return (0);
	return (ft_new_line(mas, line, fd));
}
