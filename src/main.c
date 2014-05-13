/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 12:03:01 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 19:07:23 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <stdlib.h>
#include <time.h>

static int		df_pu_arg_verif(char *str)
{
	int		i;

	i = 0;
	if (df_strlen(str) > 9)
		return (-1);
	while (str[i] != '\0')
	{
		if (df_isdigit(str[i]) == 0)
			return (-1);
		i = i + 1;
	}
	return (0);
}

int				main(int ac, char **av)
{
	t_caps	*v_this;
	int		i;

	if (ac != 3)
	{
		df_putendl_fd("Usage : ./puissance4 <li> <co>", 2);
		return (0);
	}
	if (df_pu_arg_verif(av[1]) == -1 || df_pu_arg_verif(av[2]) == -1)
	{
		df_putendl_fd("Error : wrong argument, give an int please", 2);
		return (0);
	}
	if ((v_this = df_pu_create_grid(av)) == NULL)
		return (0);
	srand(time(NULL));
	i = rand() % 2;
	df_puissance4(v_this, i);
	return (0);
}
