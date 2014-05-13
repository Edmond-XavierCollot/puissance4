/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strncat.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:26:24 by ecollot           #+#    #+#             */
/*   Updated: 2014/01/11 18:34:48 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*df_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest[i] = '\0';
	return (dest);
}
