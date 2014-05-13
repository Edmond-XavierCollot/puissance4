/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_putpf_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 17:49:10 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/22 18:03:59 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		df_putpf_d(va_list *ap, char **str)
{
	int		ret;
	int		arg;

	arg = va_arg(*ap, int);
	ret = 0;
	if (**str == '+')
	{
		if (arg > 0)
			arg = arg * -1;
		else if (arg == 0)
			ret = ret + write(1, "+", 1);
		*str = *str + 1;
	}
	ret = ret + df_putnbr(arg);
	return (ret);
}
