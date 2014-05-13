/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 13:55:09 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 19:02:03 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <stdlib.h>

char	*df_pu_fill_li(int co, char *str)
{
	int		i;

	i = 0;
	while (i < co)
	{
		str[i] = '0';
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}

int		df_pu_fill_grid(t_caps *v_this)
{
	char	**grid;
	int		i;

	i = 0;
	if ((grid = (char **)malloc(sizeof(*grid) * (v_this->li + 1))) == NULL)
	{
		df_putendl_fd("Bad alloc", 2);
		return (-1);
	}
	while (i < v_this->li)
	{
		if ((grid[i] = (char *)malloc(sizeof(**grid)
						* (v_this->co + 1))) == NULL)
		{
			df_putendl_fd("Bad alloc", 2);
			return (-1);
		}
		grid[i] = df_pu_fill_li(v_this->co, grid[i]);
		i = i + 1;
	}
	grid[i] = '\0';
	v_this->grid = grid;
	return (0);
}
