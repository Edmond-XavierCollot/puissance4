/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:22:56 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 19:06:09 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <color.h>

static void		df_pu_print_pipe(void)
{
	write(1, C_BLUE, 5);
	write(1, "|", 1);
	write(1, C_END, 4);
}

static void		df_pu_print_number(t_caps *v_this)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i <= v_this->co)
	{
		write(1, C_BLUE, 5);
		write(1, C_INVERSE, 4);
		write(1, " ", 1);
		df_putnbr(j);
		i = i + 1;
		j = j + 1;
		if (j > 9)
			j = 1;
	}
	write(1, " ", 1);
	write(1, C_END, 4);
	write(1, "\n", 1);
}

static void		df_pu_put_piece(char c)
{
	if (c == '0')
		write(1, " ", 1);
	else if (c == '1')
	{
		write(1, C_ORANGE, 5);
		write(1, "X", 1);
	}
	else if (c == '2')
	{
		write(1, C_YELLOW, 5);
		write(1, "O", 1);
	}
	write(1, C_END, 4);
}

void			df_pu_print_grid(t_caps *v_this)
{
	int		i;
	int		j;
	char	**grid;

	j = 0;
	i = 0;
	grid = v_this->grid;
	while (grid[j] != '\0')
	{
		i = 0;
		while (grid[j][i] != '\0')
		{
			df_pu_print_pipe();
			df_pu_put_piece(grid[j][i]);
			i = i + 1;
		}
		df_pu_print_pipe();
		df_putchar('\n');
		j = j + 1;
	}
	df_pu_print_number(v_this);
}
