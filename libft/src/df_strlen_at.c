/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.df_strlen_at.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 15:02:08 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/13 15:02:52 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	df_strlen_at(const char *str, int i)
{
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}
