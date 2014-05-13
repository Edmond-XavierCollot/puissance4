/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strncpy.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:54:17 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/03 10:31:57 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*df_strncpy(char *dest, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
			break ;
		dest[i] = src[i];
		i = i + 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest);
}
