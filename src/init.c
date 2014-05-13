/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 13:47:07 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/08 14:18:05 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <stdlib.h>

t_caps	*df_pu_init(void)
{
	t_caps	*v_this;

	if ((v_this = (t_caps *)malloc(sizeof(*v_this))) == NULL)
	{
		df_putendl_fd("Bad alloc", 2);
		return (NULL);
	}
	v_this->grid = NULL;
	v_this->co = 0;
	v_this->li = 0;
	return (v_this);
}
