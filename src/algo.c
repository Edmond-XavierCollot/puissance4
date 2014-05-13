/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:58:07 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 22:06:32 by bguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>

static int		df_pu_cw_vertical(t_caps *v_this, char pl)
{
	int		i;
	int		j;
	int		match;

	df_pu_mod_int(&i, &j, 0, 0);
	match = 0;
	while (i < v_this->co)
	{
		match = 0;
		j = 0;
		while ((v_this->grid)[j] != '\0' && (v_this->grid)[j][i] == '0')
			j = j + 1;
		if ((v_this->grid)[j] != '\0')
		{
			while ((v_this->grid)[j] != '\0' && (v_this->grid)[j][i] == pl)
			{
				match = match + 1;
				j = j + 1;
			}
		}
		if (match == 3)
			return (i);
		i = i + 1;
	}
	return (-1);
}

static int		df_pu_cw_horyzontal(t_caps *v_this, char pl)
{
	int		i;
	int		j;
	int		k;
	int		match;

	match = 0;
	k = 0;
	j = v_this->li - 1;
	while (k < (v_this->co - 3))
	{
		i = k;
			while ((v_this->grid)[j][i] == pl)
			{
				i = i + 1;
				match = match + 1;
			}
			if (match >= 2 && (v_this->grid)[j][i] == '0')
				return (i);
			else if (match == 1 && (v_this->grid)[j][i] == '0'
					&& (v_this->grid)[j][i + 1] == pl)
				return (i);
			k = k + 1;
	}
	return (-1);
}

int				df_pu_check_can_win(t_caps *v_this, char pl)
{
	int		res;

	if ((res = df_pu_cw_vertical(v_this, pl)) != -1)
		return (res);
	if ((res = df_pu_cw_horyzontal(v_this, pl)) != -1)
		return (res);
	return (-1);
}
