/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 10:50:50 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/15 21:49:10 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		df_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i = i + 1;
	}
	if (i >= n)
		return ((int)(s1[i - 1] - s2[i - 1]));
	else
		return ((int)(s1[i] - s2[i]));
}
