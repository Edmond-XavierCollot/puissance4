/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 11:33:18 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/22 18:30:08 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		df_printf(const char *format, ...)
{
	va_list		ap;
	char		*str;
	int			ret;
	int			ret2;

	ret = 0;
	if ((str = df_strdup(format)) == NULL)
		return (-1);
	va_start(ap, format);
	while (*str != '\0')
	{
		ret2 = 0;
		if ((ret2 = df_checkflag(&ap, &str)) == 0)
		{
			ret = ret + write(1, str, 1);
			str = str + 1;
		}
		else
			ret = ret + ret2;
	}
	return (ret);
}
