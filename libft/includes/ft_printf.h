/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 11:31:53 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/09 22:09:26 by bguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <libft.h>

int		df_printf(const char *format, ...);
int		df_checkflag(va_list *ap, char **arg);
int		df_checktype(va_list *ap, char **arg);
int		df_putnbr(int nbr);
int		df_putunbr(size_t nbr);
int		df_putstr(const char *str);
int		df_putchar(char c);
char	*df_itoa(int nbr);
int		df_putpf_d(va_list *ap, char **str);
int		df_putpf_o(int nbr);
int		df_putpf_x(int nbr, char c);
char	*df_strdup(const char *str);
size_t	df_strlen(const char *str);

#endif
