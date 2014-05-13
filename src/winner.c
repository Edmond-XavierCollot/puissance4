/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:35:12 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 19:08:23 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>

void			df_pu_mod_int(int *i, int *j, int vi, int vj)
{
	*i = vi;
	*j = vj;
}

static int		df_pu_check_point(char **grid, int x, int y)
{
	int		w;

	if (grid[y][x] == '0')
		return (0);
	if ((w = df_pu_check_horyzontal(grid, x, y)) != 0)
		return (w);
	else if ((w = df_pu_check_vertical(grid, x, y)) != 0)
		return (w);
	else if ((w = df_pu_check_diag_right(grid, x, y)) != 0)
		return (w);
	else if ((w = df_pu_check_diag_left(grid, x, y)) != 0)
		return (w);
	return (0);
}

int				df_pu_check_winner(t_caps *v_this)
{
	int		i;
	int		j;
	int		w;

	j = 0;
	while ((v_this->grid)[j] != '\0')
	{
		i = 0;
		while ((v_this->grid)[j][i] != '\0')
		{
			if ((w = df_pu_check_point(v_this->grid, i, j)) != 0)
			{
				if (w == 1)
					df_putendl("Player1 wins !");
				else
					df_putendl("IA wins !");
				return (1);
			}
			i = i + 1;
		}
		j = j + 1;
	}
	return (0);
}
