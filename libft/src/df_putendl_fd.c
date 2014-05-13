/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:48:01 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/15 21:56:06 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	df_putendl_fd(char const *s, int fd)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		df_putchar_fd((char)s[i], fd);
		i = i + 1;
	}
	df_putchar('\n');
}
