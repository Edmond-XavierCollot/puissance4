/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 19:07:34 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/13 16:16:42 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		gnl_return(char **buf, int i, int ret)
{
	char	*tmp;

	if (ret == 0)
	{
		free(*buf);
		return (0);
	}
	tmp = df_strdup_at(*buf, i);
	free(*buf);
	*buf = tmp;
	return (ret);
}

char	gnl_print(char **buff, char **line)
{
	int		i;

	i = 0;
	while ((*buff)[i] != '\0' && (*buff)[i] != '\n')
		i = i + 1;
	*line = (char *)malloc(sizeof(**line) * (i + 2));
	i = 0;
	while ((*buff)[i] != '\0' && (*buff)[i] != '\n')
	{
		(*line)[i] = (*buff)[i];
		i = i + 1;
	}
	(*line)[i] = '\n';
	(*line)[i + 1] = '\0';
	if ((*buff)[i] == '\0')
		return (gnl_return(buff, i, 0));
	i = i + 1;
	if ((*buff)[i] == '\0')
		return (gnl_return(buff, i, 0));
	else
		return (gnl_return(buff, i, 0));
}

char	*gnl_rebuff(char *buff, char *tmp)
{
	char	*tmp2;

	if (buff == NULL)
		return (df_strdup(tmp));
	tmp2 = df_strdup(buff);
	free(buff);
	buff = df_strjoin(tmp2, tmp);
	free(tmp2);
	return (buff);
}

int		get_next_line(int fd, char **line)
{
	static char	*buff = NULL;
	char		*tmp;
	int			ret;

	if (buff == NULL)
	{
		tmp = (char *)malloc(sizeof(*buff) * (GNL_SIZE + 1));
		while (1)
		{
			ret = read(fd, tmp, GNL_SIZE);
			if (ret == -1)
				return (-1);
			tmp[ret] = '\0';
			buff = gnl_rebuff(buff, tmp);
			free(tmp);
			if (ret != GNL_SIZE)
				break ;
		}
	}
	if (gnl_print(&buff, line) == 0)
	{
		buff = NULL;
		return (0);
	}
	return (1);
}
