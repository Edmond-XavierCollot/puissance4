/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 18:48:57 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/13 16:19:19 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>

int		df_puissance4(t_caps *v_this, int i)
{
	while (1)
	{
		if ((i % 2) == 1)
			v_this->grid = df_pu_ia(v_this);
		else
			df_pu_player_turn(v_this);
		if (df_pu_check_winner(v_this) == 1)
			break ;
		if (df_pu_check_equal(v_this) == 1)
			break ;
		i = i + 1;
		if (i == 1000)
			i = 0;
	}
	df_pu_print_grid(v_this);
	df_pu_trash(v_this);
	return (0);
}
