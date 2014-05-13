/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 13:33:26 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/08 14:21:48 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <stdlib.h>

t_caps	*df_pu_create_grid(char **av)
{
	t_caps	*v_this;

	if ((v_this = df_pu_init()) == NULL)
		return (NULL);
	if ((v_this->li = df_atoi(av[1])) < 6)
	{
		df_putendl_fd("Grid too small", 2);
		return (NULL);
	}
	if ((v_this->co = df_atoi(av[2])) < 7)
	{
		df_putendl_fd("Grid too small", 2);
		return (NULL);
	}
	if (df_pu_fill_grid(v_this) == -1)
		return (NULL);
	return (v_this);
}
