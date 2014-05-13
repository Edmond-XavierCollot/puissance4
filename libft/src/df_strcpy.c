/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:24:31 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/03 10:27:06 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*df_strcpy(char *dest, const char *src)
{
	size_t	size;
	size_t	i;

	size = df_strlen(src);
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
