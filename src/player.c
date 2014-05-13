/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:35:17 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/10 14:58:51 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>

static int		df_pu_verif(char *str)
{
	int		i;

	i = 0;
	while (str[i + 1] != '\0')
	{
		if (df_isdigit(str[i]) == 0)
			return (-1);
		i = i + 1;
	}
	return (0);
}

static int		df_pu_get_co(t_caps *v_this, int co)
{
	char	**grid;
	int		i;

	i = 0;
	grid = v_this->grid;
	while (grid[i] != '\0' && grid[i][co] == '0')
		i = i + 1;
	if (i == 0)
		return (-1);
	if (grid[i] == '\0')
		(v_this->grid)[v_this->li - 1][co] = '1';
	else
		(v_this->grid)[i - 1][co] = '1';
	return (0);
}

void			df_pu_player_turn(t_caps *v_this)
{
	int		co;
	char	*buf;

	buf = NULL;
	df_pu_print_grid(v_this);
	while (1)
	{
		if (buf != NULL)
			free(buf);
		buf = NULL;
		df_putstr("choose a co : ");
		if (get_next_line(0, &buf) == -1)
		{
			df_putendl_fd("Error reading", 2);
			return ;
		}
		co = df_atoi(buf);
		if (df_pu_verif(buf) == -1)
			df_putendl("try an other co in the grid please");
		else if (co > v_this->co || co <= 0
				|| df_pu_get_co(v_this, co - 1) == -1)
				df_putendl("try an other co in the grid please");
		else
		{
			free(buf);
			break ;
		}
	}
}
