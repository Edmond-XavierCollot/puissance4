/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguy <bguy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 22:05:48 by bguy              #+#    #+#             */
/*   Updated: 2014/03/09 22:15:00 by bguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include <unistd.h>
# include <libft.h>

typedef struct	s_caps
{
	char	**grid;
	int		co;
	int		li;
}				t_caps;

t_caps	*df_pu_init(void);
t_caps	*df_pu_create_grid(char **av);
t_caps	*df_pu_create_grid(char **av);
int		df_pu_trash(t_caps *v_this);
int		df_pu_check_can_win(t_caps *v_this, char pl);
int		df_pu_check_equal(t_caps *v_this);
int		df_pu_fill_grid(t_caps *v_this);
int		df_pu_check_vertical(char **grid, int x, int y);
int		df_pu_check_horyzontal(char **grid, int x, int y);
int		df_pu_check_diag_right(char **grid, int x, int y);
int		df_pu_check_diag_left(char **grid, int x, int y);
int		df_pu_check_winner(t_caps *v_this);
int		df_puissance4(t_caps *v_this, int i);
void	df_pu_mod_int(int *i, int *j, int vi, int vj);
char	**df_pu_ia(t_caps *v_this);
void	df_pu_print_grid(t_caps *v_this);
void	df_pu_player_turn(t_caps *v_this);

#endif
