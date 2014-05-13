/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:55:22 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/15 21:48:12 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*df_strstr(const char *s1, const char *s2)
{
	size_t	i;

	if (*s1 == '\0' && *s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0')
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		{
			i = i + 1;
		}
		if (s2[i] == '\0' || df_strlen(s2) == 0)
			return ((char *)s1);
		s1 = s1 + 1;
	}
	return (NULL);
}
