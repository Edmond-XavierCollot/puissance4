/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strdup_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 14:53:29 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/13 15:00:38 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*df_strdup_at(const char *str, int i)
{
	int		len;
	int		j;
	char	*dup;

	j = 0;
	len = df_strlen_at(str, i);
	if ((dup = (char *)malloc(sizeof(*dup) * (len + 1))) == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dup[j] = str[i];
		i = i + 1;
		j = j + 1;
	}
	return (dup);
}
