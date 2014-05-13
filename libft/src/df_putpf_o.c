/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_putpf_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 15:12:23 by ecollot           #+#    #+#             */
/*   Updated: 2014/01/03 10:44:18 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		df_putpf_o(int nbr)
{
	int		ret;
	int		i;

	ret = 0;
	i = nbr / 8;
	nbr = nbr % 8;
	if (i != 0)
		ret = ret + df_putpf_o(i);
	ret = ret + df_putnbr(nbr);
	return (ret);
}
