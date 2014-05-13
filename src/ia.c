/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ia.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 16:28:40 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 22:07:05 by bguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <stdlib.h>
#include <time.h>

static int		df_pu_put_res(t_caps *v_this, int res, char pl)
{
	int		i;

	i = 0;
	while ((v_this->grid)[i] != '\0' && (v_this->grid)[i][res] == '0')
		i = i + 1;
	(v_this->grid)[i - 1][res] = pl;
	return (1);
}

static int		df_pu_ia_algo(t_caps *v_this)
{
	int		res;

	if ((res = df_pu_check_can_win(v_this, '2')) != -1)
		return (df_pu_put_res(v_this, res, '2'));
	else if ((res = df_pu_check_can_win(v_this, '1')) != -1)
		return (df_pu_put_res(v_this, res, '2'));
	else
		return (0);
}

char			**df_pu_random(t_caps *v_this)
{
	int		i;
	int		j;
	char	**grid;

	grid = v_this->grid;
	j = 0;
	srand(time(NULL));
	i = rand();
	i = i % (v_this->co - 1);
	while (grid[j] != '\0' && grid[j][i] == '0')
		j = j + 1;
	if (j == 0)
		return (NULL);
	if (grid[j] == '\0')
		grid[v_this->li - 1][i] = '2';
	else
		grid[j - 1][i] = '2';
	v_this->grid = grid;
	df_pu_print_grid(v_this);
	return (grid);
}

char			**df_pu_ia(t_caps *v_this)
{
	int		i;
	int		j;

	if (df_pu_ia_algo(v_this) != 0)
		return (v_this->grid);
	i = 0;
	while (i < v_this->co)
	{
		j = 0;
		while ((v_this->grid)[j] != '\0' && (v_this->grid)[j][i] == '0')
			j = j + 1;
		if (j == 0)
			break ;
		if ((v_this->grid)[j] != '\0' && (v_this->grid)[j][i] == '1')
		{
			df_pu_put_res(v_this, i, '2');
			return (v_this->grid);
		}
		i = i + 1;
	}
	df_pu_random(v_this);
	return (v_this->grid);
}
