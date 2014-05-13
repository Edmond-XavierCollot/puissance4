/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_putpf_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 16:41:14 by ecollot           #+#    #+#             */
/*   Updated: 2014/01/03 10:44:04 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		df_putpf_x(int nbr, char c)
{
	int		ret;
	int		i;
	char	h;

	ret = 0;
	i = nbr / 16;
	nbr = nbr % 16;
	if (i != 0)
		ret = ret + df_putpf_x(i, c);
	if (nbr > 9)
	{
		if (c == 'X')
			h = nbr + 55;
		else
			h = nbr + 87;
		ret = ret + write(1, &h, 1);
	}
	else
		ret = ret + df_putnbr(nbr);
	return (ret);
}
