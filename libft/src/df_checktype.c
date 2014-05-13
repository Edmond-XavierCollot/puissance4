/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_checktype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 12:00:18 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/22 18:20:07 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		df_checktype(va_list *ap, char **str)
{
	int		ret;

	ret = 0;
	if (**str == 'd' || **str == 'i' || **str == '+')
		ret = ret + df_putpf_d(ap, str);
	else if (**str == 'u')
		ret = ret + df_putunbr(va_arg(*ap, unsigned int));
	else if (**str == 'c')
		ret = ret + df_putchar((char)va_arg(*ap, int));
	else if (**str == 's')
		ret = ret + df_putstr(va_arg(*ap, char *));
	else if (**str == 'o')
		ret = ret + df_putpf_o(va_arg(*ap, int));
	else if (**str == 'x' || **str == 'X')
		ret = ret + df_putpf_x(va_arg(*ap, int), **str);
	else if (**str == 'p')
	{
		ret = ret + write(1, "0x", 2);
		ret = ret + df_putpf_x(va_arg(*ap, size_t), 'x');
	}
	*str = *str + 1;
	return (ret);
}
