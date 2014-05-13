/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:34:52 by ecollot           #+#    #+#             */
/*   Updated: 2014/03/13 16:11:06 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define GNL_SIZE 1024
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <ft_printf.h>

void	*df_memset(void *b, int c, size_t len);
void	*df_memcpy(void *s1, const void *s2, size_t n);
void	*df_memccpy(void *s1, const void *s2, int c, size_t n);
void	*df_memmove(void *s1, const void *s2, size_t n);
void	*df_memchr(const void *s, int c, size_t n);
void	*df_memalloc(size_t size);
void	df_memdel(void ** ap);
void	df_bzero(void *s, size_t n);
void	df_strdel(char **as);
int		df_putnbr(int nbr);
void	df_putnbr_fd(int nbr, int fd);
void	df_strclr(char *s);
void	df_striter(char *s, void (*f)(char *));
void	df_striteri(char *s, void (*f)(unsigned int, char *));
int		df_putchar(char c);
void	df_putchar_fd(char c, int fd);
int		df_putstr(const char *str);
void	df_putstr_fd(const char *str, int fd);
void	df_putendl(const char *str);
void	df_putendl_fd(const char *str, int fd);
size_t	df_strlen(const char *str);
size_t	df_strlen_at(const char *str, int i);
size_t	df_strlcat(char *dest, const char *src, size_t size);
char	**df_strsplit(char const *s, char c);
char	*df_strcpy(char *dest, const char *src);
char	*df_strncpy(char *s1, const char *s2, size_t n);
char	*df_strdup(const char *str1);
char	*df_strdup_at(const char *str, int i);
char	*df_strcat(char *s1, const char *s2);
char	*df_strncat(char *s1, const char *s2, size_t n);
char	*df_strchr(const char *s, int c);
char	*df_strrchr(const char *s, int c);
char	*df_strstr(const char *s1, const char *s2);
char	*df_strnstr(const char *s1, const char *s2, size_t n);
char	*df_strnew(size_t size);
char	*df_strmap(char const *s, char (*f)(char));
char	*df_strmapi(char const *s, char (*f)(unsigned int, char));
char	*df_strsub(char const *s, unsigned int start, size_t len);
char	*df_strjoin(char const *s1, char const *s2);
char	*df_strtrim(char const *s);
char	*df_itoa(int nbr);
int		df_strcmp(const char *s1, const char *s2);
int		df_strncmp(const char *s1, const char *s2, size_t n);
int		df_atoi(const char *strc);
int		df_isalpha(int a);
int		df_isdigit(int a);
int		df_isalnum(int a);
int		df_isascii(int a);
int		df_isprint(int a);
int		df_toupper(int a);
int		df_tolower(int a);
int		df_memcmp(const void *s1, const void *s2, size_t n);
int		df_strequ(char const *s1, char const *s2);
int		df_strnequ(char const *s1, char const *s2, size_t n);
int		get_next_line(int const fd, char **line);

#endif
