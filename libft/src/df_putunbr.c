/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 14:54:48 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/22 18:16:42 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		df_putunbr(size_t nbr)
{
	int		ret;

	ret = 0;
	if (nbr >= 10)
	{
		ret = ret + df_putnbr(nbr / 10);
	}
	df_putchar('0' + (nbr % 10));
	ret = ret + 1;
	return (ret);
}
