/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:33:49 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/15 21:51:25 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*df_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *) 0;
	while (1)
	{
		if (*s == c)
			str = (char *)s;
		if (*s++ == 0)
			break ;
	}
	return (str);
}
