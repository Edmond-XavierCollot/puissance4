/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:21:53 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/03 10:28:06 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		df_strequ(char const *s1, char const *s2)
{
	if (s2 == NULL || s1 == NULL)
		return (0);
	if (df_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
