/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:53:33 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 19:03:05 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>

static int		df_pu_point_return(int match, char pl)
{
	if (match >= 4)
		return (pl - 48);
	else
		return (0);
}

int				df_pu_check_horyzontal(char **grid, int x, int y)
{
	int		match;
	int		i;
	int		j;
	char	pl;

	pl = grid[y][x];
	i = x + 1;
	j = y;
	match = 1;
	while (grid[j][i] != '\0')
	{
		if (grid[j][i] != pl)
			break ;
		match = match + 1;
		i = i + 1;
	}
	i = x - 1;
	while (i >= 0 && grid[j][i] != '\0')
	{
		if (grid[j][i] != pl)
			break ;
		match = match + 1;
		i = i - 1;
	}
	return (df_pu_point_return(match, pl));
}

int				df_pu_check_vertical(char **grid, int x, int y)
{
	int		match;
	int		i;
	int		j;
	char	pl;

	pl = grid[y][x];
	i = x;
	j = y + 1;
	match = 1;
	while (grid[j] != '\0')
	{
		if (grid[j][i] != pl)
			break ;
		match = match + 1;
		j = j + 1;
	}
	j = y - 1;
	while (j >= 0 && grid[j] != '\0')
	{
		if (grid[j][i] != pl)
			break ;
		match = match + 1;
		j = j - 1;
	}
	return (df_pu_point_return(match, pl));
}

int				df_pu_check_diag_right(char **grid, int x, int y)
{
	int		match;
	int		i;
	int		j;
	char	pl;

	pl = grid[y][x];
	df_pu_mod_int(&i, &j, (x + 1), (y + 1));
	match = 1;
	while (grid[j] != '\0' && grid[j][i] != '\0')
	{
		if (grid[j][i] != pl)
			break ;
		match = match + 1;
		df_pu_mod_int(&i, &j, (i + 1), (j + 1));
	}
	df_pu_mod_int(&i, &j, (x - 1), (y - 1));
	while (j >= 0 && i >= 0 && grid[j] != '\0' && grid[j][i] != '\0')
	{
		if (grid[j][i] != pl)
			break ;
		match = match + 1;
		df_pu_mod_int(&i, &j, (i - 1), (j - 1));
	}
	return (df_pu_point_return(match, pl));
}

int				df_pu_check_diag_left(char **grid, int x, int y)
{
	int		match;
	int		i;
	int		j;
	char	pl;

	pl = grid[y][x];
	df_pu_mod_int(&i, &j, (x - 1), (y + 1));
	match = 1;
	while (grid[j] != '\0' && grid[j][i] != '\0')
	{
		if (grid[j][i] != pl)
			break ;
		match = match + 1;
		df_pu_mod_int(&i, &j, (i - 1), (j + 1));
	}
	df_pu_mod_int(&i, &j, (x + 1), (y - 1));
	while (j >= 0 && i >= 0 && grid[j] != '\0' && grid[j][i] != '\0')
	{
		if (grid[j][i] != pl)
			break ;
		match = match + 1;
		df_pu_mod_int(&i, &j, (i + 1), (j - 1));
	}
	return (df_pu_point_return(match, pl));
}
