/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <edxcollot@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/04 16:24:13 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/13 14:36:36 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	df_atoi_skip2(char c)
{
	if (c == '\v' || c == '\t' || c == '\r' || c == '\f')
		return (1);
	else
		return (0);
}

static int	df_atoi_skip(char *str, char *positive)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || (df_atoi_skip2(str[i])) || str[i] == '\n')
		i = i + 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*positive = 0;
		i = i + 1;
	}
	return (i);
}

int			df_atoi(const char *strc)
{
	int		ret;
	char	positive;
	int		i;

	ret = 0;
	positive = 1;
	i = df_atoi_skip((char *)strc, &positive);
	while (strc[i] != '\0' && (strc[i] >= '0' && strc[i] <= '9'))
	{
		ret = ret * 10;
		ret = ret + (strc[i] - '0');
		i = i + 1;
	}
	if (positive == 0)
		ret = ret * -1;
	return (ret);
}
