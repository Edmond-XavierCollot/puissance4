/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 18:24:49 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/03 10:25:23 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	df_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
		df_putstr_fd ("-2147483648", fd);
	if (nbr < 0)
	{
		df_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		df_putnbr_fd(nbr / 10, fd);
	}
	df_putchar_fd('0' + (nbr % 10), fd);
	return ;
}
