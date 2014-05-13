/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 10:55:04 by ecollot           #+#    #+#             */
/*   Updated: 2014/01/11 18:29:54 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*df_addchar2(char *str, char c)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i = i + 1;
	if ((ret = (char *)malloc(sizeof(*ret) * (i + 2))) == NULL)
		return (NULL);
	while (j < i)
	{
		ret[j] = str[j];
		j = j + 1;
	}
	ret[j] = c;
	ret[j + 1] = '\0';
	return (ret);
}

static char	*df_itoa2(char *str, int nbr)
{
	char	*ret;

	if (str != NULL)
		ret = str;
	else
	{
		ret = (char *)malloc(sizeof(ret) * 1);
		*ret = '\0';
	}
	if (nbr < 0)
	{
		ret = df_addchar2(ret, '-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ret = df_itoa2(ret, nbr / 10);
	}
	ret = df_addchar2(ret, ('0' + (nbr % 10)));
	return (ret);
}

char		*df_itoa(int nbr)
{
	char	*result;

	if (nbr == -2147483648)
	{
		result = (char *)malloc(sizeof(result) * 11);
		result = df_strdup("-2147483648");
		return (result);
	}
	result = df_itoa2(NULL, nbr);
	return (result);
}
