/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trash.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 18:15:04 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 18:27:20 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <stdlib.h>

int		df_pu_check_equal(t_caps *v_this)
{
	int		i;
	int		j;

	j = 0;
	while ((v_this->grid)[j] != '\0')
	{
		i = 0;
		while ((v_this->grid)[j][i] != '\0')
		{
			if ((v_this->grid)[j][i] == '0')
				return (0);
			i = i + 1;
		}
		j = j + 1;
	}
	df_putendl("Equality !");
	return (1);
}

int		df_pu_trash(t_caps *v_this)
{
	int		i;
	char	**grid;

	i = 0;
	grid = v_this->grid;
	while (grid[i] != '\0')
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
	free(v_this);
	return (0);
}
